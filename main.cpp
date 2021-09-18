#include <iostream>
#include <functional>

int main()
{
	int a;
	int b;

	std::cout << "a: ";
	std::cin >> a;

	std::cout << "b: ";
	std::cin >> b;

	std::cout << a << " + " << b << " = " << std::plus<int>()(a, b) << std::endl;

	return 0;
}
