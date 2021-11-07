#pragma once

#include <string>


enum class TokenType
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
	NAME,
	NUM_LITERAL, 
	THREAD,
	ENDTHREAD,
};

struct Token
{
	TokenType type;
	std::string value;
};

