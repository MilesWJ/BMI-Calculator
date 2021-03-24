#include <iostream>
#include <cmath>
#include "Person.h"

float Person::calculate(float weight, float height) {
	try {
		float newHeight = pow(height, 2);
		float bmi = weight / newHeight;
		std::cout << "Your BMI is " << bmi << "!" << std::endl;
		return bmi;
	}
	catch (...) {
		std::cout << "\nUnable to calculate a weight of " << weight << " and a height of " << height << ".";
	}
}

void Person::determine(float bmi) {
	if (bmi < 18.5) {
		std::cout << "\nYour BMI of " << bmi << " indicates that you're underweight." << std::endl;
	}
	else if (bmi > 18.5 && bmi < 24.9) {
		std::cout << "\nYour BMI of " << bmi << " indicates that you're normal weight." << std::endl;
	}
	else if (bmi > 25 && bmi < 29.9) {
		std::cout << "\nYour BMI of " << bmi << " indicates that you're overweight" << std::endl;
	}
	else if (bmi > 30) {
		std::cout << "\nYour BMI of " << bmi << " indicates that you're obese." << std::endl;
	}
}