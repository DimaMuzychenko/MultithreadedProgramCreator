#include "CommandIfThen.hpp"

CommandIfThen::CommandIfThen(ICommand* comp)
{
	if (comp->Type() == CommandType::EQ_COMP || comp->Type() == CommandType::LESS_COMP)
	{
		compCommand.reset(comp);
	}
	else
	{
		throw std::invalid_argument("Wrong command type!");
	}
}

void CommandIfThen::Exec(Thread& thread) const
{

}

std::string CommandIfThen::ToCpp() const noexcept
{
	std::stringstream ss;
	ss << "if " << compCommand->ToCpp() << "\n{\n";
	return ss.str();
}

CommandType CommandIfThen::Type() const noexcept
{
	return CommandType::IF_THEN;
}
