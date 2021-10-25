#pragma once

#include <iostream>
#include <map>



class Interpretator
{
public:
	// Execute one line command
	void Exec(const std::string& command);

	// Run REPL
	void Run();

private:
	

private:
	std::map<std::string, uint32_t> variables;
};

