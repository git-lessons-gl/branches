#include <iostream>

int add_func(int &a, int &b)
{
        return a + b;
}

int main()
{
        int a;
        int b;

        std::cout << "a: ";
        std::cin >> a;

        std::cout << "b: ";
        std::cin >> b;

        std::cout << a << " + " << b << " = " << add_func(a,b) << std::endl;

        return 0;
}