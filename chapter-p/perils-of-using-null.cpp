#include <iostream>
#include <cstddef>  // for NULL

void print(int x)
{
    std::cout << "print(int): " << x << '\n';
}

void print(int *x)
{
    if (!x)
    {
        std::cout << "print(int*): null\n";
    }
    else
    {
        std::cout << "print(int*): " << *x << '\n';
    }

}

int main()
{
    int *x = NULL;
    print(x); // calls print(int*)
    print(0); // calls print(int)

    print(NULL); // error: call to 'print' is ambiguous

    return 0;
}