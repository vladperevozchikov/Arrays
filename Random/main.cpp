#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 15;
	int arr[n];
	//rand(); // ������� rand() ���������� ��������������� �����, � ��������� �� 8 �� 32 767
	// ���������� ������� ���������� �������:
	int minRand, maxRand;
	do
	{
		cout << "������� ���������� ��������� �����: "; cin >> minRand;
		cout << "������� ������������ ��������� �����: "; cin >> maxRand;
		if (minRand > maxRand)cout << "Error: �������� ����������, �������� ��� ���";
	} while (minRand > maxRand);
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	/*for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 50+50;
	}*/
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}