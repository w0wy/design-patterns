#ifndef SOME_OBSERVER_IMPL_H_
#define SOME_OBSERVER_IMPL_H_

#include <string>
#include "IObserver.h"

class SomeObserverImpl : public IObserver
{
public:
	SomeObserverImpl(const std::string& tag) : tag_(tag) {};

private:
	// Some bussiness logic on notification from Subjects
	void update(const IObserver::Message& message ) override;

	std::string tag_;
};

#endif  // SOME_OBSERVER_IMPL_H_