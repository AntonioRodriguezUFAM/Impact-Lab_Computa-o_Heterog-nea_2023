#include <iostream>

/*
* Challenge: Calculate an Average
*/

const int LENTGH_ARREY = 5;
const int values[LENTGH_ARREY] = { 25,49,60,88999,10 };
float Cal_average=0.0f;
enum cow_purpose
{
	dairy,
	meat,
	hide,
	pet
};

class vehicle
{
public:
	vehicle();
	~vehicle();

private:

};

vehicle::vehicle()
{
}

vehicle::~vehicle()
{
}

struct cow{
	std::string name;
	int age;
	unsigned char purpose;
	};

int main() {
	cow my_cow;
	my_cow.age = 10;
	my_cow.name = "Julia";
	my_cow.purpose = pet;

	std::cout << (int)my_cow.purpose << std::endl;


	my_cow.purpose = dairy;
	Cal_average = values[0] + values[1] + values[2] + values[3] + values[4];
	std::cout << " Sum of Values =" << Cal_average << std::endl;
	Cal_average = Cal_average / LENTGH_ARREY;

	std::cout <<"Calculated avarage of Values = " << Cal_average << std::endl;

	return (0);
}