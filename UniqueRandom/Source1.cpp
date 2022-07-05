#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	//
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}

	//
	for (int i = 0; i < n; i++)
	{
		arr[i] = (rand() % 100 << tab;
	}

	//
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cuot << endl;
}