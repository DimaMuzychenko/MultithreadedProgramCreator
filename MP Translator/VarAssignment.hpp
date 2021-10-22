#pragma once
#include "ICommand.hpp"



class VarAssignment : public ICommand
{
public:
	VarAssignment(std::string&& lVarName, std::string&& rVarName);
	VarAssignment(const std::string& lVarName, const std::string& rVarName);

	std::string ToCpp() override;

	CommandType GetCommandType() override;

private:
	std::string leftVarName;
	std::string rightVarName;
};

