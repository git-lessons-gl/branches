#include <iostream>

int main()
{
        int a;
        int b;
        
        
        std::cout << "Enter num a: ";
        std::cin >> a;

        std::cout << "Enter num b: ";
        std::cin >> b;

        if(a > b)
                std::cout << "a greater then b : " << a << " + " << b << " = " << a + b << std::endl;
        else if(b > a)
                std::cout << "b greater then a : " << a << " + " << b << " = " << a + b << std::endl;
        else
                std::cout << "b is equal a : " << a << " + " << b << " = " << a + b << std::endl;


        return 0;
}
