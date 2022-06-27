#ifndef SUBJECT_H_
#define SUBJECT_H_

#include <list>

#include "IObserver.h"

class Subject
{
public:
	virtual ~Subject() {}

	// Add new Observer that current Subject should notify
	void registerObserver(IObserver*);
	// Remove Observer so it no longer gets notified by current Subject
	void unregisterObserver(IObserver*);

protected:
	// Notify all the Observers registered with your message
	void notify(const IObserver::Message& message);

private:
	std::list<IObserver*> observers_;
};


#endif  // SUBJECT_H_