#include <iostream>

int main()
{
        int a;
        int b;

        std::cout << "a: ";
        std::cin >> a;

        std::cout << "b: ";
        std::cin >> b;

        if(a > b)
                std::cout << "a greater then b : " << a << " + " << b << " = " << a + b << std::endl;
        else if(b > a)
                std::cout << "b greater then a : " << a << " + " << b << " = " << a + b << std::endl;
        else
                std::cout << "b is equal a : " << a << " + " << b << " = " << a + b << std::endl;
        return 0;
}
