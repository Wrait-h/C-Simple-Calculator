#include <iostream>

int main()
{
	// Why am I doing this lmao

	std::cout << "Please select the method" << '\n';
	std::cout << "[1] Addition" << '\n';
	std::cout << "[2] Subtraction" << '\n';
	std::cout << "[3] Multiplication" << '\n';
	std::cout << "[4] Division" << '\n';
	std::cout << "[5] Modulus" << '\n';
	std::cout << "[6] Exponent" << '\n';
	std::cout << "[7] Square Root" << '\n';
	std::cout << "[8] Cube Root" << '\n';
	std::cout << "[9] Logarithm" << '\n';
	std::cout << "[10] Factorial" << '\n';

	// That's alot of things huh

	int x;
	std::cin >> x;

	if (x == 1)
	{
		std::cout << "Please enter the first number" << '\n';
		int a;
		std::cin >> a;
		std::cout << "Please enter the second number" << '\n';
		int b;
		std::cin >> b;
		std::cout << "The answer is " << a + b << '\n';
	}
	if (x == 2)
	{
		std::cout << "Please enter the first number" << '\n';
		int a;
		std::cin >> a;
		std::cout << "Please enter the second number" << '\n';
		int b;
		std::cin >> b;
		std::cout << "The answer is " << a - b << '\n';
	}
	if (x == 3)
	{
		std::cout << "Please enter the first number" << '\n';
		int a;
		std::cin >> a;
		std::cout << "Please enter the second number" << '\n';
		int b;
		std::cin >> b;
		std::cout << "The answer is " << a * b << '\n';
	}
	if (x == 4)
	{
		std::cout << "Please enter the first number" << '\n';
		int a;
		std::cin >> a;
		std::cout << "Please enter the second number" << '\n';
		int b;
		std::cin >> b;
		std::cout << "The answer is " << a / b << '\n';
	}
	if (x == 5)
	{
		std::cout << "Please enter the first number" << '\n';
		int a;
		std::cin >> a;
		std::cout << "Please enter the second number" << '\n';
		int b;
		std::cin >> b;
		std::cout << "The answer is " << a % b << '\n';
	}
	if (x == 6)
	{
		std::cout << "Please enter the first number" << '\n';
		int a;
		std::cin >> a;
		std::cout << "Please enter the second number" << '\n';
		int b;
		std::cin >> b;
		std::cout << "The answer is " << pow(a, b) << '\n';
	}
	if (x == 7)
	{
		std::cout << "Please enter the number" << '\n';
		int a;
		std::cin >> a;
		std::cout << "The answer is " << sqrt(a) << '\n';
	}
	if (x == 8)
	{
		std::cout << "Please enter the number" << '\n';
		int a;
		std::cin >> a;
		std::cout << "The answer is " << cbrt(a) << '\n';
	}
	if (x == 9)
	{
		std::cout << "Please enter the number" << '\n';
		int a;
		std::cin >> a;
		std::cout << "The answer is " << log(a) << '\n';
	}
	if (x == 10)
	{
		std::cout << "Please enter the number" << '\n';
		int a;
		std::cin >> a;
		std::cout << "The answer is " << tgamma(a + 1) << '\n';
	}
	else
	{
		std::cout << "Invalid selection." << '\n';
	}

}

