#include "Parser.hpp"

std::vector<Token> Parser::Parse(std::istream& code) const
{
	std::vector<Token> tokens;
	std::string nextWord;
	TokenType tokenType;
	std::string tokenValue;
	while (code >> nextWord)
	{
		tokenValue.clear();

		if (nextWord == "thread")
		{
			tokenType = TokenType::THREAD;
		}
		else if (nextWord == "endthread")
		{
			tokenType = TokenType::ENDTHREAD;
		}
		else if (nextWord == "read")
		{
			tokenType = TokenType::READ;
		}
		else if (nextWord == "print")
		{
			tokenType = TokenType::PRINT;
		}
		else if (nextWord == "=")
		{
			tokenType = TokenType::ASSIGN;
		}
		else if (nextWord == "==")
		{
			tokenType = TokenType::EQ_COMP;
		}
		else if (nextWord == "<")
		{
			tokenType = TokenType::LESS_COMP;
		}
		else if (nextWord == "if")
		{
			tokenType = TokenType::IF;
		}
		else if (nextWord == "then")
		{
			tokenType = TokenType::THEN;
		}
		else  if (nextWord == "else")
		{
			tokenType = TokenType::ELSE;
		}
		else if (nextWord == "endif")
		{
			tokenType = TokenType::ENDIF;
		}
		else // name or numerical literal
		{
			try
			{
				std::stoul(nextWord);
				tokenType = TokenType::NUM_LITERAL;
			}
			catch (std::invalid_argument& ex)
			{
				tokenType = TokenType::NAME;
			}
		}

		tokens.push_back({ tokenType, std::move(tokenValue) });
	}

	return tokens;
}

std::vector<Token> Parser::Parse(const std::string& code) const
{
	std::stringstream ss(code);
	return Parse(ss);
}


