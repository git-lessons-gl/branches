#include <iostream>
int Sum(int& a,int& b){
    int res;
    return res = a+b;}
void Print(int&a, int& b){
    std::cout << a << " + " << b << " = " << Sum(a,b) << std::endl;
    }
int main()
{
        int a;
        int b;

        std::cout << "a: ";
        std::cin >> a;

        std::cout << "b: ";
        std::cin >> b;

        Print(a,b);

        return 0;
}
