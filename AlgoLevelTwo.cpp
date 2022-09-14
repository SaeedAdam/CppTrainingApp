
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
	for (int i = number + 64; i > 64; i--)
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
	int counter = { 0 };

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
	default:
		return '.';

	}
}

// Problem #21
string GenerateWord(enuCharType charType, short length)
{
	string chars;

	for (int i = 1; i <= length; i++)
	{
		chars += GetRandomCharacter(charType);
	}

	return chars;
}
string GenerateKey()
{
	string key;

	for (int i = 1; i <= 4; i++)
	{
		key += GenerateWord(CapitalLetter, 4);

		if (i < 4)
		{
			key += '-';
		}
	}

	return key;
}
string GenerateKeys(int numberOfKeys)
{
	string key;

	for (int i = 1; i <= numberOfKeys; i++)
	{
		key += GenerateKey();

		cout << "Key[" << i << "]: " << key << endl;

		key = "";
	}

	return key;
}

// Problem #22
// My Solution 
int* LoadArray(int arrLength)
{

	static int arr[100];

	for (int i = 0; i < arrLength; i++)
	{
		cout << "Element [" << i + 1 << "]: ";
		cin >> arr[i];
	}

	return arr;
}
void CheckNumberInArray(int NumberToCheck, int arrLength)
{
	int* myArray;
	myArray = LoadArray(arrLength);
	int counter = 0;


	cout << "Original array: ";

	for (int i = 0; i < arrLength; i++)
	{
		cout << myArray[i] << " ";

		if (NumberToCheck == myArray[i])
		{
			counter++;
		}
	}
	cout << endl;
	cout << NumberToCheck << " is repeated " << counter << " Time(s)" << endl;
}
// The instructor solution (It's better than mine due to being more reusable)
void ReadArray(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;

	cout << "\nEnter array elements: \n";

	for (int i = 0; i < arrLength; i++)
	{
		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];
	}

	cout << endl;
}
void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

// Problem #23
void LoadArrayWithRandomNumbers(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}

	cout << "Array elements: \n";
	PrintArray(arr, arrLength);
}

// Problem #24
int MaxNumberInArray(int array[100], int arrLength)
{
	int maxNumber = 0;

	for (int i = 0; i < arrLength; i++)
	{
		if (array[i] > maxNumber)
		{
			maxNumber = array[i];
		}
	}

	return maxNumber;
}
void LoadArrayWithRandomNumbers2(int arrLength)
{
	int arr[100];

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}

	cout << "Array elements: ";
	PrintArray(arr, arrLength);
	cout << endl;
	cout << "Max number is: " << MaxNumberInArray(arr, arrLength);
}

// Problem #25
int MinNumberInArray(int array[100], int arrLength)
{
	int minNumber = 0;
	minNumber = array[0];

	for (int i = 0; i < arrLength; i++)
	{
		if (array[i] < minNumber)
		{
			minNumber = array[i];
		}
	}

	return minNumber;
}
void LoadArrayWithRandomNumbers3(int arrLength)
{
	int arr[100];

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}

	cout << "Array elements: ";
	PrintArray(arr, arrLength);
	cout << endl;
	cout << "Min number is: " << MinNumberInArray(arr, arrLength);
}

// Problem #26
int SumArray(int array[100], int arrLength)
{
	int sum = 0;

	for (int i = 0; i < arrLength; i++)
	{
		sum += array[i];
	}

	return sum;
}
void LoadArrayWithRandomNumbers4(int arrLength)
{
	int arr[100];

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}

	cout << "Array elements: ";
	PrintArray(arr, arrLength);
	cout << endl;
	cout << "Sum is: " << SumArray(arr, arrLength);
}

// Problem #27
float AverageOfArray(int arr[100], int arrLength)
{
	return float(SumArray(arr, arrLength)) / float(arrLength);
}
void LoadArrayWithRandomNumbers5(int arrLength)
{
	int arr[100];

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}

	cout << "Array elements: ";
	PrintArray(arr, arrLength);
	cout << endl;
	cout << "Average is: " << AverageOfArray(arr, arrLength);
}

// Problem #28
void CopyArray(int arr[100], int arrLength)
{
	int arrTwo[100];

	for (int i = 0; i < arrLength; i++)
	{
		arrTwo[i] = arr[i];
	}

	cout << "Array 2 elements after copy: \n";
	PrintArray(arr, arrLength);
}

// Problem #29
void CopyPrimeNumbersFromArray(int arr[100], int arrLength)
{
	int arrTwo[100];
	int indexCounter = 0;

	for (int i = 0; i < arrLength; i++)
	{
		if (IsPrime(arr[i]))
		{
			arrTwo[indexCounter] = arr[i];
			indexCounter++;
		}
	}

	cout << "Prime Number in Array 2: \n";
	PrintArray(arrTwo, indexCounter - 1);
}

// Problem #30
void SumOfTwoArrays(int arr1[], int arr2[], int arrLength)
{
	int arr3[100];

	for (int i = 0; i < arrLength; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
	}

	cout << "Sum of array1 and array2 elements: \n";
	PrintArray(arr3, arrLength);
}

// Problem #31
void Swap(int& a, int& b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
void LoadArrayWithOrderedNumbers(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = i + 1;
	}

	cout << "Array elements: \n";
	PrintArray(arr, arrLength);
}
void ShuffleArrayElements(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
	}
}

// Problem #32
void ReverseCopyArray(int arr[100], int arrLength)
{
	int min = 0;
	int max = arrLength - 1;

	for (int i = 0; i < arrLength / 2; i++)
	{
		if (min < max)
		{
			swap(arr[min], arr[max]);

			min++;
			max--;
		}
	}

	cout << "Array 2 elements after copy and reverse: \n";
	PrintArray(arr, arrLength);
}

// Problem #33
void FillArrayWithKeys(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = GenerateKey();
}
void PrintStringArray(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << "Key[" << i << "]: " << arr[i] << endl;
	cout << "\n";
}

// Problem #34
int ReturnNumberIndex(int number, int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == number)
		{
			return i;
		}
	}

	return -1;
}

// Problem #35
bool IsNumberInArray(int number, int arr[100], int arrLength)
{
	if (ReturnNumberIndex(number, arr, arrLength) == -1)
	{
		return false;
	}

	return true;
}

// Problem #36




//---------------------------------------------------//

int main()
{
	srand((unsigned)time(nullptr));

	int arr[100];
	const int arrLength = ReadPositiveNumber("Enter number of number of elements: ");

	LoadArrayWithRandomNumbers(arr, arrLength);

	cout << endl;

	int number = ReadPositiveNumber("Please enter the number to search for: ");


	cout << "Number you are looking for is: " << number << endl;

	if (IsNumberInArray(number, arr, arrLength))
	{
		cout << "The number is found :-)" << endl;
	}
	else
	{
		cout << "The number is not found :-( " << endl;
	}

	return 0;
}