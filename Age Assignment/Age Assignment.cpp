#include <iostream>

int age;

int main()
{
	std::cout << "What is your age?\n";
	std::cin >> age;
	if (age > 20) {
		std::cout << "You are an adult";
	}
	else if (age < 20) {
		std::cout << "You are a teenager.";
	}
}
