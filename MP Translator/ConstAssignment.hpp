#pragma once
#include "ICommand.hpp"



class ConstAssignment : ICommand
{
public:
	ConstAssignment(std::string&& varName, uint32_t constVal);
	ConstAssignment(const std::string& varName, uint32_t constVal);

	std::string ToCpp() override;

	CommandType GetCommandType() override;

private:
	std::string varName;
	uint32_t constVal;
};

