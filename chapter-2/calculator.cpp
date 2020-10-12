#include <iostream>

int getUserInput()
{
    std::cout << "Enter an integer: ";
    int input;
    std::cin >> input;

    std::cout << "The integer chosen was " << input << "\n";

    return input;
}

int getMathematicalOperation()
{
    std::cout << "List of available operations: \n";
    std::cout << "1: Addition\n";
    std::cout << "2: Substraction\n";
    std::cout << "Choose an operation from the list: ";

    int operation;
    std::cin >> operation;

    if(operation == 1){
        std::cout << "The operation chosen was Addition.\n";
    }
    else if(operation == 2){
        std::cout << "The operation chosen was Substraction\n";
    }
    else{
        std::cout << "The operation you chose wasn't on the list\n";
        return -1;
    }
    

    return operation;
}

int calculateResult(int firstValue, int secondValue, int operation){

    std::cout << "Making the calculations...\n";
    if(operation == 1){
        return firstValue + secondValue;
    }
    if(operation == 2){
        return firstValue - secondValue;
    }

    return -1;
}

void printResult(int result)
{
    std::cout << "The result was " << result << "\n";
}

int main()
{
    //get first number from user
    int firstValue = getUserInput();

    //getMathematical Operation from user
    int operation = getMathematicalOperation();
    if (operation == -1){
        return 0;
    }

    //get second number from user
    int secondValue = getUserInput();
    
    //calculate result;
    int result = calculateResult(firstValue, secondValue, operation);

    //print result
    printResult(result);

    return 0;
}