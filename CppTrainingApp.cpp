
#include <iostream>
#include <string>
using namespace std;

enum gender { male, female };
enum status { single, married };
enum colors { red, blue, orange, black, white, green, gray, yellow };

struct str_address
{
	string street;
	string city;
	string country;
	string zip;
};
struct str_car
{
	string brand;
	string model;
	short int year{};

};
struct str_person
{
	string full_name;
	short int age{};
	string phone;
	
	float monthly_salary = 0.0;
	float yearly_salary = monthly_salary * 12.0f;

	gender my_gender{};
	status is_married{};
	colors favorite_color{};

	str_address address;
	str_car my_car;
};

void read_info(str_person &person)
{
	cout << "Full Name?" << endl;
	getline(cin, person.full_name);

	cout << "Age?" << endl;
	cin >> person.age;

	cout << "City?" << endl;
	cin >> person.address.city;

	cout << "Country?" << endl;
	cin.ignore(1, '\n');
	cin >> person.address.country;

	cout << "Monthly Salary?" << endl;
	cin >> person.monthly_salary;
}

void print_info(str_person person)
{
	cout << "*****************\n";
	cout << "Name: " << person.full_name << endl;
	cout << "Age: " << person.age << " years." << endl;
	cout << "City: " << person.address.city << endl;
	cout << "Country: " << person.address.country << endl;
	cout << "Monthly Salary: " << person.monthly_salary << endl;
	cout << "Yearly Salary: " << person.monthly_salary * 12.00f << endl;
	cout << "*****************";
}

int main()
{
	str_person person1;
	read_info(person1);
	print_info(person1);

	return 0;
}