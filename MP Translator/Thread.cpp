#include "Thread.hpp"

#include <iterator>


Thread::Thread(const std::string& name, std::shared_ptr<Context>& context) : name{ name }, context{ context }
{

}

Thread::Thread(std::string&& name, std::shared_ptr<Context>& context) : name{ std::move(name) }, context{ context }
{

}

Thread::~Thread()
{
	for (auto p : commands)
	{
		delete p;
	}
}

void Thread::AddCommand(ICommand* command)
{
	commands.push_back(command);
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

std::shared_ptr<Context> Thread::GetContext() const noexcept
{
	return context;
}

std::string Thread::ToCpp()const noexcept
{
	std::stringstream ss;
	ss << "void f_" << name << "() \n"
		<< "{ \n";
	for (const auto& c : commands)
	{
		ss << c->ToCpp();
	}
	ss << "} \n\n";

	return ss.str();
}

std::string Thread::GetName() const noexcept
{
	return name;
}