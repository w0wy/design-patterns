#include <algorithm>

#include "IObserver.h"
#include "Subject.h"

void Subject::registerObserver(IObserver* obs)
{
	observers_.push_back(obs);
}

void Subject::unregisterObserver(IObserver* obs)
{
	observers_.remove(obs);
}

void Subject::notify(const IObserver::Message& message)
{
	std::for_each(observers_.begin(), observers_.end(), [&message](auto it){ it->update(message); });
}