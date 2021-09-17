#include <iostream>
int sum(int a, int b){
        return a+b;
}
int multiply(int a, int b){
        return a*b;
}
int main()
{
        int a;
        int b;

        std::cout << "a: ";
        std::cin >> a;

        std::cout << "b: ";
        std::cin >> b;

        std::cout << a << " + " << b << " = " << sum(a,b) << std::endl;
        std::cout << a << " * " << b << " = " << multiply(a,b) << std::endl;

        return 0;
}
