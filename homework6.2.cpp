// Программа вариант 1 "Вывод элементов главной диагонали массива"
#include <iostream>
#include <cstdlib>  // Для функций rand() и srand()
#include <ctime>    // Для функции time()
using namespace std;

int main() 
{
    const int rows = 2;
    const int cols = 2;
    int matrix[rows][cols];
    
    // Инициализация генератора случайных чисел
    srand(time(nullptr));
    
    // Заполнение массива случайными числами от 1 до 10
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j)
        {
            matrix[i][j] = rand() % 10 + 1;
        }
    }
    
    // Вывод исходного массива
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    // Вывод главной диагонали
    cout << "Главная диагональ:" << endl;
    for (int i = 0; i < rows && i < cols; ++i) 
    {
        cout << matrix[i][i] << " ";
    }
    cout << endl;
    
    return 0;
}