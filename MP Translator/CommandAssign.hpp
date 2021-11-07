#pragma once

#include "ICommand.hpp"

class CommandAssign : public ICommand
{
public:
	void Exec(Thread& thread) override;

	std::string ToCpp() override;

private:
	std::string leftOperand;
	std::string rightOperand;

};

