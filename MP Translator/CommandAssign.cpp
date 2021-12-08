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
	try
	{
		std::stoi(rightOperand);
		ss << "SetVar(\"" << leftOperand << "\", " << rightOperand << ");\n";
	}
	catch (std::exception)
	{
		ss << "SetVar(\"" << leftOperand << "\", GetVarVal(\"" << rightOperand << "\"));\n";
	}	
	return ss.str();
}

CommandType CommandAssign::Type() const noexcept
{
	return CommandType::ASSIGN;
}
