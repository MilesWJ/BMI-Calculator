#include <iostream>
#include "Person.h"

int main()
{
	Person Person;

	std::cout << "NOTE: The body mass index is a measure of body fat based on height and weight that applies to adult men and women." << std::endl;

	std::cout << "\nEnter your weight in kilograms: ";
	std::cin >> Person.weight;

	std::cout << "Enter your height in meters: ";
	std::cin >> Person.height;

	Person.bmi = Person.calculate(Person.weight, Person.height);
	Person.determine(Person.bmi);
}
