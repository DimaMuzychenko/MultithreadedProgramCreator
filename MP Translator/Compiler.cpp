#include "Compiler.hpp"
#include "CommandAssign.hpp"
#include "CommandEqComp.hpp"
#include "CommandLessComp.hpp"
#include "CommandPrint.hpp"
#include "CommandRead.hpp"
#include "CommandElse.hpp"
#include "CommandIfThen.hpp"
#include "CommandEndIf.hpp"

#include <stdexcept>


std::vector<Thread> Compiler::Compile(const std::vector<Token>& tokens) const
{
	std::vector<Thread> threads;
	size_t threadNum = 0;
	bool isThreadEnded = true;
	auto contextPtr = std::make_shared<Context>();
	auto token = std::begin(tokens);
	while (token != std::end(tokens))
	{
		if (token->type == TokenType::THREAD)
		{
			if (isThreadEnded)
			{
				++token;
				++threadNum;
				isThreadEnded = false;
				if (token->type == TokenType::NAME)
				{
					threads.push_back(Thread(token->value, contextPtr));
				}
				else
				{
					throw std::runtime_error("Invalid thread name \"" + token->value + "\"!");
				}
			}
			else
			{
				throw std::runtime_error("Thread was not ended up with endthread keyword!");
			}
		}
		else if (token->type == TokenType::NAME)
		{
			auto lhs = token->value;
			++token;
			if (token->type == TokenType::ASSIGN)
			{
				++token;
				if (token->type == TokenType::NUM_LITERAL || token->type == TokenType::NAME)
				{
					auto rhs = token->value;
					ICommand* command = new CommandAssign(lhs, rhs);
					threads[threadNum - 1].AddCommand(command);
				}
				else
				{
					throw std::runtime_error("Invalid assignment: " + (token-2)->value + " = " + token->value);
				}
			}
			else
			{
				throw std::runtime_error("Invalid variable operation!");
			}
		}
		else if (token->type == TokenType::READ)
		{
			++token;
			if (token->type == TokenType::NAME)
			{
				ICommand* command = new CommandRead(token->value);
				threads[threadNum - 1].AddCommand(command);
			}
			else
			{
				throw std::runtime_error("Invalid reading operation!");
			}
		}
		else if (token->type == TokenType::PRINT)
		{
			++token;
			if (token->type == TokenType::NAME)
			{
				ICommand* command = new CommandPrint(token->value);
				threads[threadNum - 1].AddCommand(std::move(command));
			}
			else
			{
				throw std::runtime_error("Invalid printing operation!");
			}
		}
		else if (token->type == TokenType::IF)
		{
			auto lhsToken = ++token;
			auto compToken = ++token;
			auto rhsToken = ++token;
			auto thenToken = ++token;
			if (lhsToken->type == TokenType::NAME &&
				rhsToken->type == TokenType::NUM_LITERAL &&
				thenToken->type == TokenType::THEN)
			{
				if (compToken->type == TokenType::EQ_COMP)
				{
					ICommand* command = new CommandEqComp(lhsToken->value, rhsToken->value);
					threads[threadNum - 1].AddCommand(std::move(command));
				}
				if (compToken->type == TokenType::LESS_COMP)
				{
					ICommand* command = new CommandLessComp(lhsToken->value, rhsToken->value);
					threads[threadNum - 1].AddCommand(std::move(command));
				}
			}
			else
			{
				throw std::runtime_error("Invalid if-then expression!");
			}
		}
		else if (token->type == TokenType::ELSE)
		{
			ICommand* command = new CommandElse();
			threads[threadNum - 1].AddCommand(std::move(command));
		}
		else if (token->type == TokenType::ENDIF)
		{
			ICommand* command = new CommandEndIf();
			threads[threadNum - 1].AddCommand(std::move(command));
		}
		else if (token->type == TokenType::ENDTHREAD)
		{
			isThreadEnded = true;
		}

		++token;
	}

	return threads;
}

