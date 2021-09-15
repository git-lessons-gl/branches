#include <iostream>

int main()
{
        int a;
        int b;

        std::cout << "a: ";
        std::cin >> a;

        std::cout << "b: ";
        std::cin >> b;

        if (a < 0 || b < 0) {
                std::cout << "Invalid numbers" << std::endl;
                return -1;
        }

        std::cout << a << " + " << b << " = " << a + b << "\n";

        return 0;
}
