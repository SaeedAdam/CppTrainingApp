
#include <iostream>
using namespace std;

int main()
{
	string name;
	char age;
	string city;
	string country;
	float monthly_salary = 0.0;
	char gender;
	bool is_married;

	cout << "What is your name?" << endl;
	cin >> name;

	cout << "How old are you?" << endl;
	cin >> age;

	cout << "Which city you live in?" << endl;
	cin >> city;

	cout << "Which country you live in?" << endl;
	cin >> country;

	cout << "What is your current monthly salary?" << endl;
	cin >> monthly_salary;

	cout << "Gender?" << endl;
	cin >> gender;

	cout << "Are you married? 1/0 " << endl;
	cin >> is_married;


	cout << "\n****************************\n";

	cout << "Name: " << name << endl;
	cout << "Age: " << age << " years." << endl;
	cout << "City: " << city << endl;
	cout << "Country: " << country << endl;
	cout << "Monthly Salary: " << monthly_salary << endl;
	cout << "Yearly Salary: " << monthly_salary * 12 << endl;
	cout << "Gender: " << gender << endl;
	cout << "Married : " << is_married << endl;
	
	cout << "****************************";
	
	return 0;
}