#include <string>
#include <iostream>

int main()
{
    std::cout << "Pick 1 or 2: ";
    int choice;
    std::cin >> choice;

    std::cin.ignore(32767, '\n'); // ignore up to 32767 characters until a \n is removed
    // technically, we should use 32767 = std::numeric_limits<std::streamsize with #include <limits>

    std::cout << "Now enter your name: ";
    std::string name;
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << ", you picked " << choice << '\n';

    /*
    It turns out, when you enter a value using cin, cin not only captures the value, it also captures the newline.
    So when we enter 2, cin actually gets the string “2\n”. It then extracts the 2 to variable choice,
    leaving the newline stuck in the input stream. Then, when std::getline() goes to read the name,
    it sees “\n” is already in the stream, and figures we must have entered an empty string!
    
    Definitely not what was intended.

    A good rule of thumb is that after reading a value with std::cin, remove the newline from the stream.
    That's what ignore is for.
    */
    return 0;
}