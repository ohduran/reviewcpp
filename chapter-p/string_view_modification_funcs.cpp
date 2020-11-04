#include <iostream>
#include <string_view>

int main()
{
    std::string_view str = "Peach";

    std::cout << str << '\n';  // Peach

    str.remove_prefix(1);
    std::cout << str << '\n';  // each

    str.remove_suffix(1);

    std::cout << str << '\n'; // ea
    return 0;
}