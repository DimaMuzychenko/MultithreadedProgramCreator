#pragma once

#include "Thread.hpp"

enum class CommandType
{
	ASSIGN,
	READ,
	PRINT,
	EQ_COMP,
	LESS_COMP
};

class Thread;

class ICommand
{
public:
	virtual void Exec(Thread& thread) = 0;
	virtual std::string ToCpp() = 0;

};
