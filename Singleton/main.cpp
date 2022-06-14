#include "NaiveSingleton.h"
#include "SMSingleton.h"

int main()
{
    // Usage NaiveSingleton
    NaiveSingleton* naiveSingleton = NaiveSingleton::instance();
    naiveSingleton->doSomething();

    // Usage SMSingleton - Scott Meyer's Singleton
    SMSingleton& smSingleton = SMSingleton::instance();
    smSingleton.doSomething();

    return 1;
}
