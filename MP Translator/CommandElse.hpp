#pragma once

#include "ICommand.hpp"

class CommandElse : public ICommand
{
public:
	CommandElse();

	void Exec(Thread& thread) const override;

	std::string ToCpp() const noexcept override;

	CommandType Type() const noexcept override;
};

