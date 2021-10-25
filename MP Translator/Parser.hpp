#pragma once

#include <vector>
#include <istream>
#include <sstream>

#include "Token.hpp"


class Parser
{
public:
	// Splits a given program into a sequence of tokens
	std::vector<Token> Parse(const std::string& code) const;

	// Splits a given program into a sequence of tokens
	std::vector<Token> Parse(std::istream& code) const;

private:
};

