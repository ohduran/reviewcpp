/* 
- The user is asked to enter
2 floating point numbers (double).
- The user is then asked to enter 
one of +, -, *, /.
- The program computes the answer
of the two numbers the user enters
and prints the result.
*/
#include <iostream>

double enterDoubleNumber()
{
    std::cout << "Enter number: ";
    double number;
    std::cin >> number;
    return number;
}

char enterMathSymbol()
{
    std::cout << "[+, -, *, /]";
    std::cout << "Enter a symbol from the list:";

    char symbol;
    std::cin >> symbol;
    return symbol;
}

void printResult(double firstNumber, double secondNumber, char symbol)
{
    double result;

    if (symbol == '+')
    {
        result = firstNumber + secondNumber;
    }
    else if (symbol == '-')
    {
        result = firstNumber - secondNumber;
    }
    else if (symbol == '*')
    {
        result = firstNumber * secondNumber;
    }
    else
    {
        result = firstNumber / secondNumber;
    }

    std::cout << firstNumber << " " << symbol << " " << secondNumber << " is " << result << std::endl;
}

int main(int argc, char const *argv[])
{
    const double firstNumber = enterDoubleNumber();
    const double secondNumber = enterDoubleNumber();

    char symbol = enterMathSymbol();

    if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/')
    {
        printResult(firstNumber, secondNumber, symbol);
    }

    return 0;
}
