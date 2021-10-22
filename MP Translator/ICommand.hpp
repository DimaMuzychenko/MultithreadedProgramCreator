#pragma once
#include <iostream>

enum CommandType
{
	VarAssignment,
	ConstAssignment,
	InputVar,
	PrintVar,
	EqComp,
	LessComp
};


class ICommand
{
public:
	virtual std::string ToCpp() = 0;
	virtual CommandType GetCommandType() = 0;

};

