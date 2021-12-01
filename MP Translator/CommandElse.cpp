#include "CommandElse.hpp"

#include <sstream>

CommandElse::CommandElse()
{

}

void CommandElse::Exec(Thread& thread) const
{

}

std::string CommandElse::ToCpp() const noexcept
{
	std::stringstream ss;
	ss << "} \n else \n {" << std::endl;
	return ss.str();
}

CommandType CommandElse::Type() const noexcept
{
	return CommandType::ELSE;
}
