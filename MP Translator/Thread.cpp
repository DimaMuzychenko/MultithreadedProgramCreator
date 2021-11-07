#include "Thread.hpp"


Thread::Thread(const std::string& name, std::shared_ptr<Context>& context) : name{ name }, context{ context }
{

}

Thread::Thread(std::string&& name, std::shared_ptr<Context>& context) : name{ std::move(name) }, context{ context }
{

}

void Thread::AddCommand(ICommand& command)
{
	commands.emplace_back(&command);
}

void Thread::Exec(size_t amount)
{
	for (; amount > 0; --amount)
	{
		if (index != commands.size())
		{
			commands[index]->Exec(*this);
			++index;
		}
	}
}

size_t Thread::Size() const
{
	return commands.size();
}

bool Thread::IsFinished() const
{
	return index == commands.size();
}
