#pragma once

#include <map>
#include <string>

class Context
{
public:
	bool Contains(const std::string& varName) const noexcept;
	uint32_t& Var(const std::string& varName) noexcept;

private:
	std::map<std::string, uint32_t> variables;

};

