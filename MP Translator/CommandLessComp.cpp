#include "CommandLessComp.hpp"

CommandLessComp::CommandLessComp(std::string varName, std::string constName) noexcept :
	leftOperand(std::move(varName)), rightOperand(std::move(constName))
{

}

void CommandLessComp::Exec(Thread& thread) const
{

}

std::string CommandLessComp::ToCpp() const noexcept
{
	std::stringstream ss;
	ss << "(context[" << leftOperand << "] < " << rightOperand << ') ';
	return ss.str();
}

CommandType CommandLessComp::Type() const noexcept
{
	return CommandType::LESS_COMP;
}
