#ifndef SOME_SUBJECT_IMPL_H_
#define SOME_SUBJECT_IMPL_H_

#include "Subject.h"

class SomeSubjectImpl : public Subject
{
public:

	// Subject bussiness logic and notification afterwards
	void doBussinessLogicAndNotify(const std::string& message);
};

#endif  // SOME_SUBJECT_IMPL_H_