#pragma once
class Person
{
public:
	float weight;
	float height;
	float bmi;

	float calculate(float weight, float height);
	void determine(float bmi);
};
