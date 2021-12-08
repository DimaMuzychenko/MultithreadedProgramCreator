#include "CommandPrint.hpp"


CommandPrint::CommandPrint(std::string operand) noexcept :
	operand(std::move(operand))
{

}

void CommandPrint::Exec(Thread& thread) const
{

}

std::string CommandPrint::ToCpp() const noexcept
{
	std::stringstream ss;
	ss << "std::cout << context[\"" << operand << "\"] << std::endl;" << std::endl;
	return ss.str();
}

CommandType CommandPrint::Type() const noexcept
{
	return CommandType::PRINT;
}
