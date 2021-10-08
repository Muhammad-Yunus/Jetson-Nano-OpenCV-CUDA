#include <iostream>

int main()
{
    // Statements are used when we want the program to perform an action. 
    // Expressions are used when we want the program to calculate a value.
	std::cout << 2 + 3 << '\n';

	int x{ 6 };
	int y{ x - 2 };
	std::cout << y << '\n';

	int z{ 0 };
	z = x;
	std::cout << z - x << '\n';

	return 0;
}