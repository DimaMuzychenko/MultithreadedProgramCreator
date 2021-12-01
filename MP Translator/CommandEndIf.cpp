#include "CommandEndIf.hpp"



CommandEndIf::CommandEndIf()
{

}

void CommandEndIf::Exec(Thread& thread) const
{

}

std::string CommandEndIf::ToCpp() const noexcept
{
	std::stringstream ss;
	ss << '}' << std::endl;
	return ss.str();
}

CommandType CommandEndIf::Type() const noexcept
{
	return CommandType::ENDIF;
}
