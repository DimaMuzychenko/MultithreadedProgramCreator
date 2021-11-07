#pragma once

#include "Token.hpp"
#include "Thread.hpp"

class Compiler
{
public:
	std::vector<Thread> Compile(const std::vector<Token>& tokens) const;

};

