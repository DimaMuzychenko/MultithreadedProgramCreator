#pragma once

#include "ICommand.hpp"

#include <memory>


class CommandIfThen : public ICommand
{
public:
	CommandIfThen(ICommand* comp);

	void Exec(Thread& thread) const override;

	std::string ToCpp() const noexcept override;

	CommandType Type() const noexcept override;

private:
	std::unique_ptr<ICommand> compCommand;
};

