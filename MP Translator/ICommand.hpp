#pragma once

#include "Thread.hpp"

#include <sstream>

enum class CommandType
{
	ASSIGN,
	READ,
	PRINT,
	EQ_COMP,
	LESS_COMP,
	IF_THEN,
	ELSE,
	ENDIF
};

class Thread;

class ICommand
{
public:

	virtual void Exec(Thread& thread) const = 0;
	virtual std::string ToCpp() const noexcept = 0;
	virtual CommandType Type() const noexcept = 0;
};
