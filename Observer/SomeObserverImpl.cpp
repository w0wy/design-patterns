#include <iostream>

#include "SomeObserverImpl.h"

void SomeObserverImpl::update(const IObserver::Message& message)
{
	std::cout << "\nReceived notification on " << tag_ << " from Subject with message " << message << "\n";
}