#include "VarAssignment.hpp"


VarAssignment::VarAssignment(std::string&& lVarName, std::string&& rVarName) : leftVarName(std::move(lVarName)), rightVarName(std::move(rVarName))
{

}

VarAssignment::VarAssignment(const std::string& lVarName, const std::string& rVarName) : leftVarName(lVarName), rightVarName(rVarName)
{

}

std::string VarAssignment::ToCpp()
{
	return leftVarName + " = " + rightVarName + ';';
}

CommandType VarAssignment::GetCommandType()
{
	return CommandType::VarAssign;
}

