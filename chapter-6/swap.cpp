#include <iostream>

int enterAnInteger()
{
    std::cout << "Enter an integer: ";
    int integer;
    std:: cin >> integer;

    return integer;
}

int enterALargeInteger()
{
    std::cout << "Enter a large integer: ";
    int integer;
    std:: cin >> integer;

    return integer;
}



int main()
{
    int x = enterAnInteger();
    int y = enterALargeInteger();

    {   
        int temp;
        if (x > y)
        {
            std::cout << "Swapping the values\n";
            temp = x;
            x = y;
            y = temp;
        }
    }

    std::cout << "The smaller value is " << x << '\n';
    std::cout << "The larger value is " << y << '\n';

}