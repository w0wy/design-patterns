#ifndef SM_SINGLETON_H_
#define SM_SINGLETON_H_

class SMSingleton
{
private:
	// Instance should not be constructible by external means
    SMSingleton() = default;

public:
	// Instance should not be copyable
    SMSingleton (const SMSingleton&) = delete;
    SMSingleton& operator=(const SMSingleton&) = delete;

    // Provide a function to retrieve the singleton
    static SMSingleton& instance()
    {
    	static SMSingleton inst;
    	return inst;
    }

    void doSomething()
    {
    	// doSomething here
    }
};

#endif  // SM_SINGLETON_H_