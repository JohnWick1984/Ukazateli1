// 1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;



int main()
{
    setlocale(0, "");
    srand(time(NULL));

    int size1 = 10;
    int size2 = 10;
    cout << " Введите размер первого массива " << endl;
    cin >> size1;

    cout << " Введите размер второго массива " << endl;
    cin >> size2;

    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    cout << "*****Первый массив  А[N]*******" << "\n";
    for (int i = 0; i < size1; i++)
    {
        arr1[i] = rand() % 10;
        cout << arr1[i] << " ";
    }
    cout << endl;
    int tmp1;

    for (int i = 0;i < (size1); i++) 
    {
        for (int j = (size1  - 1);j > i;j--)
        {
            if (arr1[j] < arr1[j - 1]) 
            {
                tmp1 = arr1[j];
                arr1[j] = arr1[j - 1];
                arr1[j - 1] = tmp1;
            }
        }
    }
    cout << "*****Второй массив  B[N]*******" << "\n";
    for (int i = 0; i < size2; i++)
    {
        arr2[i] = rand() % 10;
        cout << arr2[i] << " ";
    }
    cout << endl;
    int tmp2;

    for (int i = 0;i < (size2); i++) 
    {
        for (int j = (size2 - 1);j > i;j--)
        {
            if (arr2[j] < arr2[j - 1]) 
            {
                tmp2 = arr2[j];
                arr2[j] = arr2[j - 1];
                arr2[j - 1] = tmp2;
            }
        }
    }
    
    int* arr3 = new int[size1+size2];
    int j = 0;

    for (int i = 0; i < (size1 + size2); i++)
    {
        if (i < size1) 
        {
            arr3[i] = *(arr1 + i);
        }
        else if (i >= size1) 
        {
            arr3[i] = *(arr2 + j);
            j++;
        }

    }
    int tmp3;
    for (int i = 0;i < (size1 + size2); i++) 
    {
        for (int j = (size1 + size2 - 1);
            j > i;j--) 
        {
            if (arr3[j] < arr3[j - 1]) 
            {
                tmp3 = arr3[j];
                arr3[j] = arr3[j - 1];
                arr3[j - 1] = tmp3;
            }
        }
    }
    cout << "*****Третий массив  С[N+M]*******" << "\n";
    for (int i = 0; i < (size1 + size2); i++)
    {

        cout << arr3[i]<< " ";
    }
    return 0;
}