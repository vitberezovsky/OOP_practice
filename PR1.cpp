#include <iostream>
#include "Customer.h"

int main() {
	Customer customer1, customer2, customer3;
	std::cin >> customer1 >> customer2 >> customer3;
	std::cout << endl << customer1 << endl << customer2 << endl << customer3;
	std::cout << endl << (customer1 == customer2 ? "Customers are the same" : "Customers are different") << endl;
}