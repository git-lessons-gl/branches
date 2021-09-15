#include <iostream>

int main()
{
        int a = 5;
        int b = 5;

        if (a < 0 || b < 0) {
                std::cout << "Invalid numbers" << std::endl;
                return -1;
        }

        std::cout << a << " + " << b << " = " << a + b << std::endl;

        return 0;
}
