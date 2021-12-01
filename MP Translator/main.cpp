#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Parser.hpp"
#include "Compiler.hpp"
#include "Translator.hpp"


int main(int argc, const char* argv[])
{
	if (argc == 1)
	{
		// run interpretator
		std::cout << "Pass pseudo code file as a parameter!" << std::endl;
		std::system("pause");
	}
	else if (argc == 2)
	{
		// run translation proccess
		Parser parser;
		Compiler compiler;
		Translator translator;

		std::string inputfileName = argv[1];
		std::fstream file;
		file.open(inputfileName, std::ios::in);
		if (!file.is_open())
		{
			std::cout << "Can't open " << argv[1] << '!' << std::endl;
			std::system("pause");
			return 0;
		}

		std::vector<Token> tokens = parser.Parse(file);
		std::vector<Thread> threads = compiler.Compile(tokens);
		translator.TranslateToCpp(threads, "out.cpp");
		file.close();
	}
	else
	{
		std::cout << "Unknown arguments!" << std::endl;
	}

	return 0;
}