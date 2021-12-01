#include "CommandAssign.hpp"

#include <sstream>

CommandAssign::CommandAssign(std::string lhs, std::string rhs) noexcept :
	leftOperand(std::move(lhs)), rightOperand(std::move(rhs))
{

}

void CommandAssign::Exec(Thread& thread) const
{

}

std::string CommandAssign::ToCpp()  const noexcept
{
	std::stringstream ss;
	ss << "context[" << leftOperand << ']' << " = " << rightOperand << ';' << std::endl;
	return ss.str();
}

CommandType CommandAssign::Type() const noexcept
{
	return CommandType::ASSIGN;
}
