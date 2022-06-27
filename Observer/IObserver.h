#ifndef I_OBSERVER_H_
#define I_OBSERVER_H_

#include <string>

class IObserver
{
public:
	// Message type that the observer can send
	// This can be any type you want
	// It is not even necessary, you can just notify (without any message or data)
	using Message = std::string;

	virtual ~IObserver() {}

	// Method to update the state with message from Subjects
	// When Subjects notify -> this function will be called with the message
	virtual void update(const Message& message) = 0;
};

#endif  // I_OBSERVER_H_