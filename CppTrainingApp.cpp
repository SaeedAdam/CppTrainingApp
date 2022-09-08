
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

str_info read_info()
{
	str_info info;

	cout << "First Name?" << endl;
	cin >> info.first_name;

	cout << "Last Name?" << endl;
	cin >> info.last_name;

	cout << "Age?" << endl;
	cin >> info.age;

	cout << "Phone Number?" << endl;
	cin >> info.phone;

	return info;
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

short int ReadIntNumberInRange(int from, int to)
{
	short int num;
	
	do
	{
		cout << "Please enter a number between " << from << " and " << to << endl;
		cin >> num;

	} while (num < from || num > to);
	

	return num;
}

void SumOfBillsBelowGivenAmount(int numOfBills, float amount)
{
	int num = 0;
	float sum = 0.0f;

	cout << "You will only pay the bills that are above " << amount << " riyals." << endl;
	cout << "Any bill that is less than " << amount << " riyals will be free!" << endl;
	cout << "\n";

	for (int i = 1; i <= numOfBills; i++)
	{
		cout << "Bill No. " << i << " - Please enter the amount: " << endl;
		cin >> num;

		if (num < amount)
		{
			cout << "We will not count bill No. " << i << ". It's FREE!" << endl;
			continue;
		}

		sum += num;
	}

	cout << "\nThe total amount is: " << sum << " riyals." << endl;
	cout << "\nThank you for using our service." << endl;
}

string ReadName()
{
	string name;

	cout << "Please enter your name? " << endl;
	cin >> name;

	return name;
}
void PrintName(string name)
{
	cout << "Your name is: " << name << endl;
}

float CalculateAverage(int num1, int num2, int num3)
{
	return float(num1 + num2 + num3) / 3.0f;
}

float ReadPositiveNumber(string message)
{
	int num = 0;
	do
	{
		cout << message << endl;
		cin >> num;
	}
	while (num <= 0);

	return num;
}

float CalculateRemainder(float totalBill, float totalCashPaid)
{
	return totalCashPaid - totalBill;
}

float AddServiceFees(float amount)
{
	return amount * 1.1f;
}
float AddTaxes(float amount)
{
	return amount * 1.16f;
}
float AddAllFees(float amount)
{
	float grandTotal = amount;

	grandTotal = AddServiceFees(grandTotal);
	grandTotal = AddTaxes(grandTotal);

	return grandTotal;
}

void CalculateBill()
{
	float totalBill = ReadPositiveNumber("Please enter total bill?");
	float grandTotalBill = AddAllFees(totalBill);
	float totalCashPaid = ReadPositiveNumber("Please enter total cash paid?");
	cout << endl;

	cout << "Total bill = " << totalBill << endl;
	cout << "Grand Total after Services and Taxes = " << grandTotalBill << endl;
	cout << "Total cash paid = " << totalCashPaid << endl;

	cout << "**************************\n";
	cout << "Remainder = " << CalculateRemainder(grandTotalBill, totalCashPaid) << endl;
}





int main()
{
	CalculateBill();
	return 0;
}