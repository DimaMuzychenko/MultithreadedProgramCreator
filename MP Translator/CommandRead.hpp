#pragma once

#include "ICommand.hpp"

class CommandRead : public ICommand
{
public:
	CommandRead(std::string operand) noexcept;

	void Exec(Thread& thread) const override;

	std::string ToCpp() const noexcept override;

	CommandType Type() const noexcept override;

private:
	std::string operand;

};

