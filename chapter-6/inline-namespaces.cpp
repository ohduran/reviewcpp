#include <iostream>

inline namespace v1
{
    void doSomething()
    {
        std::cout << "v1\n";
    }
}

namespace v2
{
    void doSomething()
    {
        std::cout << "v2\n";
    }
}

int main()
{
    v1::doSomething();  //v1
    v2::doSomething();  // v2
    
    doSomething();  // calls the inline version of doSomething

    return 0;
}