#include <iostream>
#include <string>
#include "Parser.hpp"


int main()
{
	Parser parser;

	auto tokens = parser.Parse(std::cin);
	return 0;
}