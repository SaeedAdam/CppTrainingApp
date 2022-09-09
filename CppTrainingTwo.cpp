
#include <iostream>
#include <string>
using namespace std;

// Algorithms & Problem-Solving Level 2
//-------------------------------------

//  Problem #1
int ReadPositiveNumber(string message)
{
	int num = 0;
	do
	{
		cout << message << endl;
		cin >> num;
	} while (num <= 0);

	return num;
}
void PrintTableHeader(int number)
{
	cout << "\n\n\t\t\tMultiplication Table From 1 to " << number << " \n\n";
	cout << "\t";

	for (int i = 1; i <= number; i++)
	{
		cout << i << "\t";
	}
	cout << endl;

	for (int i = 0; i < number; i++)
	{
		cout << "--------";
	}

	cout << endl;
}
string ColumnSeparator(int i)
{
	if (i > 9)
	{
		return "   | ";
	}

	return "    | ";

}
void MultiplicationTable()
{
	int number = ReadPositiveNumber("Please enter a positive number: ");

	PrintTableHeader(number);

	for (int i = 1; i <= number; i++)
	{
		cout << " " << i << ColumnSeparator(i);
		for (int j = 1; j <= number; j++)
		{
			cout << i * j << "\t";
		}


		cout << endl;
	}
}
//--------------

// Problem #2
bool IsPrime(int number)
{
	int m = round(number / 2);

	for (int Counter = 2; Counter <= m; Counter++)
	{
		if (number % Counter == 0)
			return false;
	}
	return true;
}
void PrintPrimeNumberFrom1ToN()
{
	int number = ReadPositiveNumber("Please enter a positive number: ");

	for (int i = 1; i < number; i++)
	{
		if (!IsPrime(i))
		{
			continue;
		}

		cout << i << endl;
	}
}

// Problem #3
bool IsPerfectNumber(int number)
{
	int sum = 0;

	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			sum += i;
		}
	}

	return number == sum;
}
void PrintWhetherOrNotPerfectNumber()
{
	int number = ReadPositiveNumber("Please enter a number: ");

	if (IsPerfectNumber(number))
	{
		cout << number << " is a perfect number.";
	}
	else
	{
		cout << number << " is NOT a perfect number.";
	}
}

// Problem #4
void PrintPerfectNumberFrom1ToN()
{
	int number = ReadPositiveNumber("Please enter a positive number: ");

	for (int i = 1; i <= number; i++)
	{
		if (IsPerfectNumber(i))
		{
			cout << i << endl;
		}
	}
}

// Problem #5
string ReadStringInput()
{
	string input;

	cout << "Enter a number: " << endl;
	cin >> input;

	return input;
}
void ReverseInput()
{
	string input = ReadStringInput();

	for (int i = input.length() - 1; i >= 0; i--)
	{
		cout << input[i] << endl;
	}
}
// Or this
void PrintDigits(int number)
{
	int remainder = 0;

	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		cout << remainder << endl;
	}
}

// Problem #6
int SumOfDigits(int number)
{
	int sum = 0, remainder = 0;

	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		sum += remainder;
	}

	return sum;
}

// Problem #7
int ReverseDigits(int number)
{
	int reversedNumber = 0;

	while (number > 0)
	{
		int remainder = number % 10;
		number = number / 10;
		reversedNumber = reversedNumber * 10 + remainder;
	}

	return reversedNumber;
}

// Problem #8
int CountDigitFrequency(short digitToCheck, int number)
{
	int frequencyCount = 0;

	while (number > 0)
	{
		int remainder = number % 10;
		number = number / 10;

		if (remainder == digitToCheck)
		{
			frequencyCount++;
		}
	}

	return frequencyCount;
}

// Problem #9
void CountAllDigitFrequency(int number)
{
	for (int i = 0; i < 10; i++)
	{
		short frequencyCount = 0;
		frequencyCount = CountDigitFrequency(i, number);

		if (frequencyCount > 0)
		{
			cout << "Digit " << i << " Frequency is " << frequencyCount << " Time(s)." << endl;
		}
	}
}

// Problem #10


//---------------------------------------------------//

int main()
{
	int number = ReadPositiveNumber("Please enter a number: ");
	CountAllDigitFrequency(number);

	return 0;
}