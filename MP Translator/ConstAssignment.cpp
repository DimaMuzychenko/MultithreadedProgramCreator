#include "ConstAssignment.hpp"
#include <string>

ConstAssignment::ConstAssignment(std::string&& varName, uint32_t constVal) : varName(std::move(varName)), constVal(constVal)
{

}

ConstAssignment::ConstAssignment(const std::string& varName, uint32_t constVal) : varName(varName), constVal(constVal)
{

}

std::string ConstAssignment::ToCpp()
{
	return varName + " = " + std::to_string(constVal) + ';';
}

CommandType ConstAssignment::GetCommandType()
{
	return CommandType::ConstAssignment;
}


