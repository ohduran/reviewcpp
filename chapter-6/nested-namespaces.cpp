#include <iostream>

namespace foo
{
    namespace goo
    {
        int add(int x, int y)
        {
            return x + y;
        }
    }
}

int main()
{
    std::cout << foo::goo::add(1, 2) << '\n';

    namespace boo = foo::goo;
    std::cout << boo::add(3,4) << '\n';
    return 0;
}