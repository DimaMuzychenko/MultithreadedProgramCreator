#pragma once

#include <string>


enum TokenType
{	
	READ,
	PRINT,
	ASSIGN,
	EQ_COMP,
	LESS_COMP,
	IF,
	THEN,
	ELSE,
	ENDIF,
	VARIABLE,
	NUM_LITERAL
};

struct Token
{
	TokenType type;
	std::string value;
};

