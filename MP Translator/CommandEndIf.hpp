#pragma once

#include "ICommand.hpp"

class CommandEndIf : public ICommand
{
public:
	CommandEndIf();

	void Exec(Thread& thread) const override;

	std::string ToCpp() const noexcept override;

	CommandType Type() const noexcept override;
};

