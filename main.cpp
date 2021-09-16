#include <iostream>
int Sum(int& a,int& b){
    int res;
    return res = a+b;}
int main()
{
        int a;
        int b;

        std::cout << "a: ";
        std::cin >> a;

        std::cout << "b: ";
        std::cin >> b;

        std::cout << a << " + " << b << " = " << Sum(a,b) << std::endl;

        return 0;
}
