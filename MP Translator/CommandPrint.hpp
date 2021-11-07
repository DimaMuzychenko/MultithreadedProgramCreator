#pragma once

#include "ICommand.hpp"

class CommandPrint : public ICommand
{
public:
	void Exec(Thread& thread) override;

	std::string ToCpp() override;

private:
	std::string operand;

};