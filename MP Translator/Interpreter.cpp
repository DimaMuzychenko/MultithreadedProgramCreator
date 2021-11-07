#include "Interpreter.hpp"




void Interpreter::Exec(const std::string& program)
{
	
}

//void Interpreter::ExecAssignment(std::vector<Token>::iterator& token)
//{
//	/*std::string varName;
//	uint32_t value;
//	bool ok = false;
//	if ((token)->type == TokenType::VARIABLE)
//	{
//		varName = token->value;
//		++token;
//		if (token->type == TokenType::ASSIGN)
//		{
//			++token;
//			if (token->type == TokenType::NUM_LITERAL)
//			{
//				value = std::stoul(token->value);
//				ok = true;
//			}
//			if (token->type == TokenType::VARIABLE)
//			{
//				try
//				{
//					value = variables.at(token->value);
//				}
//				catch (std::out_of_range&)
//				{
//					throw std::runtime_error("Variable " + token->value + " doesn't exist!");
//				}				
//				ok = true;
//			}
//			if (ok)
//			{
//				variables[varName] = value;
//				++token;
//				return;
//			}
//		}
//	}
//	throw std::runtime_error("Wrong syntax!");*/
//}
//
//void Interpreter::ExecReading(std::vector<Token>::iterator& token)
//{
//	/*if ((token)->type == TokenType::READ)
//	{
//		++token;
//		if (token->type == TokenType::VARIABLE)
//		{
//			uint32_t value;
//			std::cin >> value;
//			variables[token->value] = value;
//			++token;
//			return;
//		}
//	}
//	throw std::runtime_error("Wrong syntax!");*/
//}
//
//void Interpreter::ExecPrinting(std::vector<Token>::iterator& token)
//{
//	/*if (token->type == TokenType::PRINT)
//	{
//		++token;
//		if (token->type == TokenType::VARIABLE)
//		{
//			try
//			{
//				std::cout << variables.at(token->value) << std::endl;
//			}
//			catch (std::out_of_range&)
//			{
//				throw std::runtime_error("Variable " + token->value + " doesn't exist!");
//			}
//			++token;
//			return;
//		}
//	}
//	throw std::runtime_error("Wrong syntax!");*/
//}
//
//bool Interpreter::EvalBoolExpr(std::vector<Token>::iterator& token) const
//{
//	/*uint32_t left;
//	if (token->type == TokenType::VARIABLE)
//	{
//		try
//		{
//			left = variables.at(token->value);
//		}
//		catch (std::out_of_range&)
//		{
//			throw std::runtime_error("Variable " + token->value + " doesn't exist!");
//		}
//		++token;
//		if (token->type == TokenType::EQ_COMP)
//		{
//
//		}*/
//	}
//}
//
//void Interpreter::ExecIf(std::vector<Token>::iterator& token)
//{
//	if(token->type == TokenType::IF)
//	{
//
//	}
//}
//
//void Interpreter::ExecEndif(std::vector<Token>::iterator& token)
//{
//
//}
