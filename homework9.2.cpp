// Программа "умножение каждого элемента массива на 2"

#include <iostream>
using namespace std;

// Функция, которая умножает каждый элемент массива на 2
void doubleArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        arr[i] *= 2;
    }
}

int main() {
    const int size = 5;
    int arr[size];
    
    // Ввод элементов массива
    cout << "Введите " << size << " элементов массива: ";
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }
    
    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    doubleArray(arr, size);
    
    cout << "После удвоения: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}