#pragma once

#include <vector>
#include <string>

#include "Thread.hpp"

class Translator
{
public:
	void TranslateToCpp(const std::vector<Thread>& threads, const std::string& outFileName) const;
};

