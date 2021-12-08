#include "CommandEqComp.hpp"

CommandEqComp::CommandEqComp(std::string varName, std::string constName) noexcept :
	leftOperand(std::move(varName)), rightOperand(std::move(constName))
{

}

void CommandEqComp::Exec(Thread& thread) const
{

}

std::string CommandEqComp::ToCpp() const noexcept
{
	std::stringstream ss;
	ss << "(GetVarVal(\"" << leftOperand << "\") == " << rightOperand << ") ";
	return ss.str();
}

CommandType CommandEqComp::Type() const noexcept
{
	return CommandType::EQ_COMP;
}
