#include "Context.hpp"

bool Context::Contains(const std::string& varName) const noexcept
{
	return variables.contains(varName);
}

uint32_t& Context::Var(const std::string& varName) noexcept
{
	return variables[varName];
}
