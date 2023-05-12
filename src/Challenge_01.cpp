#include<iostream>
#include<string> // String librarys 

#define CAPACITY =10000
#define ROOMS 4
#define DEBUG
//#define AGE_LENGTH 4
const int AGE_LENGTH = 4;

//using namespace std;
int a, b = 5;
auto surname = "souto rodriguez";
int age[AGE_LENGTH];
float Temp[] = { 31.2,32.1, 31.6,29.3 };


void my_function(std::string name) {
	std::cout << " My name is: " << name << std::endl;
}
int main() {
	bool my_flag;
	std::string name;
	my_flag = true;
	a = 8;

#ifdef DEBUG
	std::cout << "Debug Mode" << std::endl;
#endif // DEBUG

	std::cout<< "What i your name? Please Write your name" << std::endl;
	std::cin >> name;
	std::cout<< name<<" First Challenge 01 Done!!" << std::endl;
	std::cout << "a =" << a << std::endl;
	std::cout << "b =" << b << std::endl;
	std::cout << "My_Flag =" << my_flag << std::endl;
	my_function(name);

	std::cout << "Antonio " << surname << std::endl;
	std::cout << typeid(surname).name() << std::endl;

	std::cout << " Temp[0] =" << Temp[0] << std::endl;
	std::cout << " Temp[1] =" << Temp[1] << std::endl;
	std::cout << " Temp[2] =" << Temp[2] << std::endl;
	std::cout << " Temp[3] =" << Temp[3] << std::endl;


	return (0);
}