#include "Compiler.hpp"



std::vector<Thread> Compiler::Compile(const std::vector<Token>& tokens) const
{
	std::vector<Thread> threads;
	size_t threadNum = 0;
	bool isThreadEnded = false;
	auto contextPtr = std::make_shared<Context>();
	auto token = std::begin(tokens);
	while (token != std::end(tokens))
	{
		if (token->type == TokenType::THREAD)
		{
			++token;	
			++threadNum;
			isThreadEnded = false;
			if (token->type == TokenType::NAME)
			{				
				threads.push_back(Thread(token->value, contextPtr));
			}
		}
		else if ((++token)->type == TokenType::ASSIGN)
		{

		}
	}

	return threads;
}

