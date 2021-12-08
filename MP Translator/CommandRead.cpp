#include "CommandRead.hpp"

CommandRead::CommandRead(std::string operand) noexcept :
	operand(std::move(operand))
{

}

void CommandRead::Exec(Thread& thread) const
{

}

std::string CommandRead::ToCpp() const noexcept
{
	std::stringstream ss;
	ss << "uint32_t temp;\n";
	ss << "std::cin >> temp;\n";
	ss << "SetVar(\"" << operand << "\", temp); \n";
	return ss.str();
}

CommandType CommandRead::Type() const noexcept
{
	return CommandType::READ;
}
