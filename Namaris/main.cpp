#include<iostream>
using namespace std; 


//void main()
//{
	//setlocale(LC_ALL, "");
	//int decimal; // Десятичное число введенное пользователем
	//cout << "Введите десятичное число"; cin >> decimal;
	//const int MAX_SIZE = 32; // int - 4 Bytes = 32bit
	//bool bin[MAX_SIZE] = {}; //  Этот массив будет хранить разряды двоичного числа 
	//int i = 0; // счетчик разряда
	const int num 8;
	char DigitToHex(int N)
	{
		switch (N)
		{
		 case 0   :  return('0'); break;
		 case 1   :  return('1'); break;
		 case 2   :  return('2'); break;
		 case 3   :  return('3'); break;
		 case 4   :  return('4'); break;
		 case 5   :  return('5'); break;
		 case 6   :  return('6'); break;
		 case 7   :  return('7'); break;
		 case 8   :  return('8'); break;
		 case 9   :  return('9'); break;
		 case 10  :  return('A'); break;
		 case 11  :  return('B'); break;
		 case 12  :  return('C'); break;
		 case 13  :  return('D'); break;
		 case 14  :  return('E'); break;
		 case 15  :  return('F'); break;
		 default  :  return('?');
		}
	}
	string MyIntToHex(int num, int count)
	{
		string Res = "?";
		if (num < 0) return(Res);
		Res = "";
		int N = num;
		int i = 1;
		int X;
		while (N > 0)
		{
			i++;
			X = N % 16;
			N = N / 16;
			if (X < 16) Res = DigitToHex(X) + Res;
		}
		for (int j = i; j <= count; j++) Res = '0' + Res;
		return(Res);
	}
	int main(int argc, char* argv[])
	{
		cout << "DEC = " << num << "; HEX = " << hex << uppercase << num << dec << endl;
		cout << "DEC = " << num << "; HEX = " << MyIntToHex(num, 4) << endl;
	}


	/*while (decimal)
	{
		bin[i] = decimal % 2;  
		decimal /= 2;    
		i++;
	}*/
	
	/*for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;*/

	


//}