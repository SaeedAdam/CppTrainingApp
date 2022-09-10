
#include <iostream>
#include <string>
#include <cstdlib>
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
	int sum = 0;

	while (number > 0)
	{
		int remainder = number % 10;
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
		short frequencyCount = CountDigitFrequency(i, number);

		if (frequencyCount > 0)
		{
			cout << "Digit " << i << " Frequency is " << frequencyCount << " Time(s)." << endl;
		}
	}
}

// Problem #10
// Combination of previous solved problems
// PrintDigits(ReverseDigits(ReadPositiveNumber("Please enter a number: ")));

// Problem #11
bool IsPalindrome(int number)
{
	return number == ReverseDigits(number);
}

// Problem #12
void PrintInvertedNumberPattern(int number)
{
	cout << "-----------" << endl;
	for (int i = number; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << i;
		}

		cout << endl;
	}
}

// Problem #13
void PrintNumberPattern(int number)
{
	cout << "-----------" << endl;
	for (int i = 1; i <= number; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << i;
		}

		cout << endl;
	}
}

// Problem #14
void PrintInvertedLetterPattern(int number)
{
	cout << "-----------" << endl;
	for (int i = number+64; i > 64; i--)
	{
		for (int j = 64; j < i; j++)
		{
			cout << char(i);
		}

		cout << endl;
	}
}

// Problem #15
void PrintLetterPattern(int number)
{
	cout << "-----------" << endl;
	for (int i = 65; i <= number + 64; i++)
	{
		for (int j = 65; j <= i; j++)
		{
			cout << char(i);
		}

		cout << endl;
	}
}

// Problem #16
void PrintAAAToZZZ()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << "------------ Letter " << char(i) << "  ------------" << endl;
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				cout << char(i) << char(j) << char(k) << endl;
			}
		}
	}
}

// Problem #17
string ReadText()
{
	string input;

	cout << "Please enter text: " << endl;
	getline(cin, input);

	return input;
}
bool Guess3LetterPassword(string input)
{
	string word;
	int counter = {0};

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				word += char(i);
				word += char(j);
				word += char(k);

				counter++;

				cout << "Trial [" << counter << "] : " << word << endl;

				if (word == input)
				{
					cout << "Password is " << word << endl;
					cout << "Found after " << counter << " Trial(s)" << endl;
					return true;
				}

				word = "";
			}
		}
	}

	cout << "Password not found" << endl;
	return false;
}

// Problem #18
string EncryptText(string text, short encryptionKey)
{
	string result;

	for (int i = 0; i < text.length(); i++)
	{
		result += char(int(text[i]) + encryptionKey);
	}

	return result;
}
string DecryptText(string text, short encryptionKey)
{
	string result;

	for (int i = 0; i < text.length(); i++)
	{
		result += char(int(text[i]) - encryptionKey);
	}

	return result;
}

// Problem #19
int RandomNumber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;
	return  randNum;
}

// Problem #20
enum enuCharType
{
	SmallLetter = 1,
	CapitalLetter = 2,
	SpecialCharacter = 3,
	Digit = 4
};
char GetRandomCharacter(enuCharType charType)
{
	switch (charType)
	{
	case SmallLetter:
		return char(RandomNumber(97, 122));
	case CapitalLetter:
		return char(RandomNumber(65, 90));
	case SpecialCharacter:
		return char(RandomNumber(33, 47));
	case Digit:
		return char(RandomNumber(48, 57));
	}
}


//---------------------------------------------------//

int main()
{
	cout << GetRandomCharacter(SmallLetter) << endl;
	cout << GetRandomCharacter(CapitalLetter) << endl;
	cout << GetRandomCharacter(SpecialCharacter) << endl;
	cout << GetRandomCharacter(Digit) << endl;

	return 0;
}