#include <iostream>
#include <string>

int main()
{
    std::string myName;
    myName = "Alvaro";
    std::cout << "My name is " << myName << std::endl;

    std::cout << "Enter your full name: ";
    std::string fullName;
    std::cin >> fullName;

    std::cout << "Enter your age: ";
    std::string age;
    std::cin >> age;

    std::cout << "Your name is " << fullName << " and your age is " << age << std::endl;

    /* 
    When we used operator>> to extract a string into variable name, only “John” was extracted,
    leaving “Doe” inside std::cin, waiting for the next extraction. When we then used operator>> to get variable age,
    it extracted “Doe” instead of waiting for us to input an age. We are never given a chance to enter an age.
    */

    return 0;
}