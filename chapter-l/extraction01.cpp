#include <iostream>

double getDouble()
{ 

    while(true)
    {
        std::cout << "Enter a double value: ";
        double x;
        std::cin >> x;
        

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
        }
        else
        {
            std::cin.ignore(32767, '\n'); // ignore everything that comes after the double inserted in x
            return x;
        }
    }
    
}

char getOperator()
{
    while(true)
    {
        std::cout << "Enter one of the following: +, -, *, /: ";
        char operation;
        std::cin >> operation;

        switch(operation)
        {
            case '+':
            case '-':
            case '*':
            case '/':
                return operation;
            default:
                std::cout << "Oops, that input is invalid, try again!\n";
        }
    }
    
    char op;
    std::cin >> op;
    return op;
}

void printResult(double x, char operation, double y)
{
    switch (operation)
    {
        case '+':
            std::cout << x << " + " << y << " is " << x + y << "\n";
            break;
        case '-':
            std::cout << x << " - " << y << " is " << x - y << "\n";
            break;
        case '*':
            std::cout << x << " * " << y << " is " << x * y << "\n";
            break;
        case '/':
            std::cout << x << " / " << y << " is " << x / y << "\n";
            break;
    }
}

int main()
{
    double x = getDouble();
    char operation = getOperator();
    double y = getDouble();

    printResult(x, operation, y);

    return 0;
}