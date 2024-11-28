#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course 4 Solution 14
// Swap Two Numbers.

void ReadNumbers(int &Num1, int &Num2)
{
	cout << "Enter Number1 :" << endl;
	cin >> Num1;

	cout << "Enter Number2 :" << endl;
	cin >> Num2;
}

void Swap(int & A , int & B)
{
	int Temp;

	Temp = A;
	A = B;
	B = Temp;
}

void PrintNumbers(int Num1 , int Num2)
{
	cout << "\n Number 1 = " << Num1 << endl;
	cout << "\n Number 2 = " << Num2 << endl;
}


int main()
{
	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	PrintNumbers(Num1, Num2);
	Swap(Num1, Num2);
	PrintNumbers(Num1, Num2);
}

