#include <iostream>

int main()
{
    for(int count = 1; count <= 100; count++){
        if (count < 10)
            std::cout << '0';
        
        std::cout << count << ' ';
        if (count % 10 == 0)
            std::cout << "\n";
    }
    std::cout << "done!\n";

    return 0;
}