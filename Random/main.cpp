#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 15;
	int arr[n];
	//rand(); // Функция rand() возврашвет псевдослучайное число, в диапозоне от 8 до 32 767
	// Заполнение массива случайными числами:
	int minRand, maxRand;
	do
	{
		cout << "Введите минмальное случайное число: "; cin >> minRand;
		cout << "Введите максимальное случайное число: "; cin >> maxRand;
		if (minRand > maxRand)cout << "Error: значение некоректны, попробуй еще раз";
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