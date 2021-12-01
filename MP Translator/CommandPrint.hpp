#pragma once

#include "ICommand.hpp"

class CommandPrint : public ICommand
{
public:
	CommandPrint(std::string operand) noexcept;

	void Exec(Thread& thread) const override;

	std::string ToCpp() const noexcept override;

	CommandType Type() const noexcept override;

private:
	std::string operand;

};