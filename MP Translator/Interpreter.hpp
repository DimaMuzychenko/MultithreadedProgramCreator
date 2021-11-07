#pragma once

#include <iostream>
#include <map>

#include "Parser.hpp"



class Interpreter
{
public:
	// Execute command
	void Exec(const std::string& program);

private:
	void ExecAssignment(std::vector<Token>::iterator& token);

	void ExecReading(std::vector<Token>::iterator& token);

	void ExecPrinting(std::vector<Token>::iterator& token);

	void ExecIf(std::vector<Token>::iterator& token);

	void ExecEndif(std::vector<Token>::iterator& token);

	bool EvalBoolExpr(std::vector<Token>::iterator& token) const;

private:
	std::map<std::string, uint32_t> variables;
	uint32_t ifCounter;
};

