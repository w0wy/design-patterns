#include "SomeSubjectImpl.h"
#include "SomeObserverImpl.h"

int main()
{
	SomeSubjectImpl subject;
	SomeObserverImpl observer1("observer1");
	SomeObserverImpl observer2("observer2");

	subject.registerObserver(&observer1);
	subject.registerObserver(&observer2);
	subject.doBussinessLogicAndNotify("subject_notif");

	subject.unregisterObserver(&observer1);
	subject.doBussinessLogicAndNotify("another_subject_notif");

	subject.unregisterObserver(&observer2);

	return 1;
}