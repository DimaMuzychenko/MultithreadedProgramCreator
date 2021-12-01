#pragma once

#include "ICommand.hpp"

class CommandAssign : public ICommand
{
public:
	CommandAssign(std::string lhs, std::string rhs) noexcept;

	void Exec(Thread& thread) const override;

	std::string ToCpp()  const noexcept override;

	CommandType Type() const noexcept override;

private:
	std::string leftOperand;
	std::string rightOperand;

};

