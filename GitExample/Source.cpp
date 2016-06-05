#include <iostream>
using namespace std;

int Add(int a, int b)
{
	return a + b;
}

int Subtract(int a, int b)
{
	return a - b + c - d;
}

int Multi(int a, int b)
{
	return a * b;
}

int main()
{
	int a, b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << Add(a, b) << endl;
	cout << Subtract(a, b) << endl;
	return 0;
}