#include <iostream>

// less-bad version
int main()
{
	std::cout << "Enter an integer: ";

	int num{ };
	std::cin >> num;

	int doublenum{ num * 2 }; // define a new variable and initialize it with num * 2
	std::cout << "Double that number is: " << doublenum << '\n'; // then print the value of that variable here

	return 0;
}