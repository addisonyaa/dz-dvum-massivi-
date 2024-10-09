#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    //Задание 1 (положит и отрицат числа массива)
    int arr[3][3] = { {4,-2,9},{1,0,7},{-8,-3,6} };
    float sum = { 0.0 };
    float sred = { 0.0 };
    int count = 0;
    

    cout << "Положительные эл-ты: ";
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            if (arr[i][j] >= 0)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
     
    cout << "Отрицательные эл-ты: ";
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            if (arr[i][j] < 0)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;

    //Задание 2 (чет и нечет числа массива)
    cout << "Четные эл-ты: ";
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            if (arr[i][j] %2 == 0)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
    cout << "Нечетные эл-ты: ";
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
    //Задание 3 (суммирование эл-тов массива)
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            sum += arr[i][j];
        }

    }
    cout << "Сумма значений элементов массива: " << sum << endl;
    

    
    //Задание 4 (среднее значение эл-тов массива)
    sum = 0;
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            sum += arr[i][j];
            count++;
        }

    }
    sred = sum / count;
    cout << "Среднее значение = " << sred << endl;
}
