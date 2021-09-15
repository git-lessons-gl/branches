#include <iostream>

int main()
{
        int a;
        int b;

<<<<<<< HEAD
        std::cout << "a: ";
        std::cin >> a;

        std::cout << "b: ";
        std::cin >> b;
=======
        if (a < 0 || b < 0) {
                std::cout << "Invalid numbers" << std::endl;
                return -1;
        }

        if (a < 0 || b < 0) {
                std::cout << "Invalid numbers" << std::endl;
                return -1;
        }

        std::cout << a << " + " << b << " = " << a + b << std::endl;
>>>>>>> 4c05c65... Check for negative numbers

        std::cout << a << " + " << b << " = " << a + b << std::endl;
        std::cout << "My first commit" << std::endl;
        return 0;
}
