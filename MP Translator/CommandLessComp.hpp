#pragma once

#include "ICommand.hpp"

class CommandLessComp : public ICommand
{
public:
	CommandLessComp(std::string varName, std::string constName) noexcept;

	void Exec(Thread& thread) const override;

	std::string ToCpp() const noexcept override;

	CommandType Type() const noexcept override;

private:
	std::string leftOperand;
	std::string rightOperand;

};

