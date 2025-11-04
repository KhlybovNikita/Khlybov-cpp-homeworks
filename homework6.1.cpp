// Программа вариант 1 "Сумма всех элементов массива"
#include <iostream>     
#include <cstdlib>  // Для функций rand() и srand() - генерации случайных чисел
#include <ctime>    
using namespace std;     

int main() 
{
    int arr[5]; // Создаем массив из 5 элементов
    int sum = 0; 
    
    srand(time(NULL)); // Инициализируем генератор случайных чисел текущим временем
    
    cout << "Элементы массива:\n";
    for (int i = 0; i < 5; i++) 
    {
        arr[i] = rand() % 10 + 1; // Генерируем случайное число от 1 до 10
        cout << arr[i] << " "; // Выводим элемент массива
        sum += arr[i];
    }
    
    cout << "\nСумма элементов: " << sum;
    return 0;
}