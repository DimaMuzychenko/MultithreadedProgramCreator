#pragma once

#include <vector>
#include <memory>
#include <string>

#include "Context.hpp"
#include "ICommand.hpp"

class ICommand;

class Thread
{
public:
	Thread(const std::string& name, std::shared_ptr<Context>& context);
	Thread(std::string&& name, std::shared_ptr<Context>& context);
	~Thread();
	void AddCommand(ICommand* command);
	void Exec(size_t amount = 1);
	size_t Size() const;
	bool IsFinished() const;
	std::shared_ptr<Context> GetContext() const noexcept;
	std::string ToCpp()const noexcept;
	std::string GetName()const noexcept;

private:
	std::shared_ptr<Context> context;
	std::vector<ICommand*> commands;
	std::string name;
	size_t index;
	size_t ifNesting;
};

