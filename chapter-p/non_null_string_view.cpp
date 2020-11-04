#include <iostream>
#include <string_view>

int main()
{
    char vowels[] = { 'a', 'e', 'i', 'o', 'u'};

    std::string_view str{vowels, 5};

    std::cout << str << '\n';

    return 0;
}