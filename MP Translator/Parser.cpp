#include "Parser.hpp"

std::vector<Token> Parser::Parse(std::istream& code) const
{
	std::vector<Token> tokens;
	Token nextToken;

	while (code >> nextToken.value)
	{
		if (nextToken.value == "read")
		{
			nextToken.type = TokenType::READ;
		}
		else if (nextToken.value == "print")
		{
			nextToken.type = TokenType::PRINT;
		}
		else if (nextToken.value == "=")
		{
			nextToken.type = TokenType::ASSIGN;
		}
		else if (nextToken.value.c_str() == "==")
		{
			nextToken.type = TokenType::EQ_COMP;
		}
		else if (nextToken.value.c_str() == "<")
		{
			nextToken.type = TokenType::LESS_COMP;
		}
		else if (nextToken.value.c_str() == "if")
		{
			nextToken.type = TokenType::IF;
		}
		else if (nextToken.value.c_str() == "then")
		{
			nextToken.type = TokenType::THEN;
		}
		else  if (nextToken.value.c_str() == "else")
		{
			nextToken.type = TokenType::ELSE;
		}
		else if (nextToken.value.c_str() == "endif")
		{
			nextToken.type = TokenType::ENDIF;
		}
		else // variable or numerical literal
		{
			try
			{
				std::stoul(nextToken.value);
				nextToken.type = TokenType::NUM_LITERAL;
			}
			catch (std::invalid_argument& ex)
			{
				nextToken.type = TokenType::VARIABLE;
			}
		}

		tokens.push_back(nextToken);
	}

	return tokens;
}

std::vector<Token> Parser::Parse(const std::string& code) const
{
	std::stringstream ss(code);
	return Parse(ss);
}


