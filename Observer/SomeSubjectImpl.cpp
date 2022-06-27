#include <iostream>

#include "SomeSubjectImpl.h"

void SomeSubjectImpl::doBussinessLogicAndNotify(const std::string& message)
{
	std::cout << "\nDoing my own bussiness logic on Subject first.\n";
	std::cout << "\nNotifying observers!\n";

	// Notify all observers with message
	notify(message);
}