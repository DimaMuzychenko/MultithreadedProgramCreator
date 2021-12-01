#pragma once

#include "ICommand.hpp"

class CommandEqComp : public ICommand
{
public:
	CommandEqComp(std::string varName, std::string constName) noexcept;

	void Exec(Thread& thread) const override;

	std::string ToCpp() const noexcept override;

	CommandType Type() const noexcept override;

private:
	std::string leftOperand;
	std::string rightOperand;

};

