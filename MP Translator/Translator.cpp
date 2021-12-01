#include "Translator.hpp"

#include <fstream>

std::string trd = "std::thread ";

void Translator::TranslateToCpp(const std::vector<Thread>& threads, const std::string& outFileName) const
{
	std::ofstream file(outFileName, std::ios::out);
	if (!file.is_open())
	{
		throw std::runtime_error("File " + outFileName + "can't be created or opened!");
	}
	file	<< "#include <iostream> \n"
			<< "#include <map> \n"
			<< "\n"
			<< "std::map<std::string, uint32_t> context; \n"
			<< "\n";

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

