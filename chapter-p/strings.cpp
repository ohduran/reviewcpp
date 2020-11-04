#include <iostream>
#include <string_view>

int main()
{
    std::string_view text = "hello";
    std::string_view str = text;
    std::string_view more = str;

    std::cout << text << ' ' << str << ' ' << more << '\n';
    return 0;


}