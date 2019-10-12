// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


/*
 * Simple main function:
 * Read two numbers and write their sum and product
*/
int main()
{
//	std::cout << "Hello World!" << std::endl;
//
//	std::cout << "Enter two numbers:" << std::endl;
//	int v1 = 0, v2 = 0;
//	std::cin >> v1 >> v2;
//
//	std::cout << "The sum of " << v1 << " and " << v2  << " is " << v1 + v2 << std::endl;
//
//	std::cout << "The product of ";
//	std::cout << v1;
//	std::cout << " and ";
//	std::cout << v2;
//	std::cout << " is ";
//	std::cout << v1 * v2;
//	std::cout << std::endl;
//
//	// Comments
//	std::cout << "/*";
//	std::cout << "*/";
//	std::cout << /* "*/" */";
//	std::cout << /* "*/" */ "/*" */;

	int sum = 0, value = 1;
	while (value <= 10) {
		sum += value;
		++value;
	}
	std::cout << "The sum of 1 t0 10 inclused is " << sum << std::endl;

	sum = 0; value = 50;
	while (value <= 100) {
		sum += value;
		++value;
	}
	std::cout << "The sum of 50 to 100 is " << sum << std::endl;

	value = 10;
	while (value >= 0) {
		std::cout << value << " ";
		--value;
	}
	std::cout << std::endl;

	std::cout << "Enter a number and a bigger number:" << std::endl;
	int smallerNumber, biggerNumber;
	std::cin >> smallerNumber >> biggerNumber;
	while (smallerNumber <= biggerNumber) {
		std::cout << smallerNumber << std::endl;
		++smallerNumber;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
