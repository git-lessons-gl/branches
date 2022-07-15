#include <iostream>

int add_func(int &a, int &b)
{
        return a + b;
}

int sub_func(int &a, int &b)
{
        return a - b;
}

int mul_func(int &a, int &b)
{
        return a * b;
}

void do_and_print_func()
{
        int a{};
        int b{};
        int sign{};

        std::cout << "a: ";
        std::cin >> a;

        std::cout << "b: ";
        std::cin >> b;

        std::cout << "Choose an operation:\n1. +\n2. -\n3. *\nYour choice: ";
        std::cin >>  sign;

        switch(sign)
        {
                case 1:
                        std::cout << a << " + " << b << " = " << add_func(a,b) << std::endl;
                        break;
                case 2:
                        std::cout << a << " - " << b << " = " << sub_func(a,b) << std::endl;
                        break;
                case 3:
                        std::cout << a << " * " << b << " = " << mul_func(a,b) << std::endl;
                        break;
                default:
                        std::cout << "Error! Try again" << std::endl;
                        break;
        }
}


int main()
{
        do_and_print_func();
        return 0;
}