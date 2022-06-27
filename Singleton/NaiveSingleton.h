#ifndef NAIVE_SINGLETON_H_
#define NAIVE_SINGLETON_H_

#include <iostream>

class NaiveSingleton
{
private:
    static NaiveSingleton* singleton_;

    // Instance should not be constructible by external means
    NaiveSingleton() = default;

public:
    // Instance should not be copyable
    NaiveSingleton (const NaiveSingleton&) = delete;
    NaiveSingleton& operator=(const NaiveSingleton&) = delete;

    // Provide a function to retrieve the singleton
    static NaiveSingleton* instance()
    {
        if (singleton_ == nullptr)
            singleton_ = new NaiveSingleton();
        
        return singleton_;
    }

    void doSomething()
    {
        // doSomething here
        std::cout << "\nDoing something NaiveSingleton.\n";
    }
};

// Static variable should be initialized outside the class
NaiveSingleton* NaiveSingleton::singleton_ = nullptr;

#endif  // NAIVE_SINGLETON_H_