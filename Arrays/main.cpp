#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {};
	//arr[2] = 123;    //Во второй элемент массива записываем значения 123
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
	    }
		cout << endl;

}