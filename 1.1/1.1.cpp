// 1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{

	setlocale(0, "");
	srand(time(NULL));

	const int N = 10;
	int arr[N] =  {};
	int temp;
	cout << "**************Первоначальный массив*********** \n";
	for (int i = 0; i < N; i++)
	{
		arr[i] = 1 + rand() % 10;
		cout << arr[i] << " ";
		
	}
	cout << endl;
	int* pa;
	pa = &arr[0];
	
	for (int j = 0; j < N; j++)
	{
		if ((j+1)%2 ==1 && j!=10)
		{
			temp = *(pa + j);
			*(pa + j) = *(pa + j + 1);
			*(pa + j + 1) = temp;
		}
	}
	cout << "****************Преобразованный массив************* \n";
	for (int p = 0; p < N; p++)
	{
		cout << *(pa + p) << " ";
	}
}


 