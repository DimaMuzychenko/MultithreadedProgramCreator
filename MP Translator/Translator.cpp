#include "Translator.hpp"

#include <fstream>

std::string trd = "std::thread ";

void Translator::TranslateToCpp(const std::vector<Thread>& threads, const std::string& outFileName) const
{
	std::ofstream file(outFileName, std::ios::trunc);
	if (!file.is_open())
	{
		throw std::runtime_error("File " + outFileName + "can't be created or opened!");
	}
	file	<< "#include <iostream> \n"
			<< "#include <map> \n"
			<< "#include <thread> \n"
			<< "#include <mutex> \n"
			<< "\n"
			<< "std::map<std::string, uint32_t> context; \n"
			<< "\n"
			<< "std::mutex mtx; \n"
			<< "\n"
			<< "uint32_t& GetVar(const std::string& varName) \n"
			<< "{ \n"
			<< "return context[varName]; \n"
			<< "} \n"
			<< "\n"
			<< "void SetVar(const std::string& varName, uint32_t val)\n"
			<< "{\n"
			<< "mtx.lock();\n"
			<< "GetVar(varName) = val;\n"
			<< "mtx.unlock();\n"
			<< "}\n"
			<< "uint32_t GetVarVal(const std::string& varName)\n"
			<< "{\n"
			<< "mtx.lock();\n"
			<< "uint32_t val = GetVar(varName);\n"
			<< "mtx.unlock();\n"
			<< "return val;\n"
			<< "}\n";
			

	for (const auto& th : threads)
	{
		file << th.ToCpp();
	}

	file << "\n\n";

	file << "int main() \n"
		<< "{ \n";

	for (int i = 0; i < threads.size(); ++i)
	{
		file << trd << "t" << i + 1 << "(f_" << threads[i].GetName() << "); \n";
	}

	file << "\n";

	for (int i = 0; i < threads.size(); ++i)
	{
		file << 't' << i + 1 << ".join(); \n";
	}

	file << "return 0; \n"
		<< "} \n";

	file.close();
}

