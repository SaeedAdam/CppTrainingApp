
#include <iostream>
#include <string>
using namespace std;

struct str_info
{
	string first_name;
	string last_name;
	short int age{};
	string phone;
};

void read_info(str_info& info)
{
	cout << "First Name?" << endl;
	cin >> info.first_name;

	cout << "Last Name?" << endl;
	cin >> info.last_name;

	cout << "Age?" << endl;
	cin >> info.age;

	cout << "Phone Number?" << endl;
	cin >> info.phone;
}

void print_info(str_info info)
{
	cout << "\n*****************\n";
	cout << "First Name: " << info.first_name << endl;
	cout << "Last Name: " << info.last_name << endl;
	cout << "Age: " << info.age << " years." << endl;
	cout << "Phone Number: " << info.phone << endl;
	cout << "\n*****************\n";
}

void read_persons(str_info persons[100], int& length)
{
	cout << "How many persons? " << endl;
	cin >> length;

	for (int i = 0; i < length; i++)
	{
		cout << "\nPlease enter persons\'s " << i+1 << " info: " << endl;
		read_info(persons[i]);
	}
}

void print_persons(str_info persons[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "\nPerson number " << i+1 << " info: " << endl;
		print_info(persons[i]);
	}
}


int main()
{

	str_info persons[100];
	int length = 0;

	read_persons(persons, length);
	print_persons(persons, length);

	return 0;
}