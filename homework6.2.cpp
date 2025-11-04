// Программа вариант 1 "Вывод элементов главной диагонали массива"
#include <iostream>
#include <cstdlib>  // Для функций rand() и srand()
#include <ctime>    // Для функции time()

int main() {
    const int rows = 2;
    const int cols = 2;
    int matrix[rows][cols];
    
    // Инициализация генератора случайных чисел
    std::srand(std::time(nullptr));
    
    // Заполнение массива случайными числами от 1 до 10
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = std::rand() % 10 + 1;
        }
    }
    
    // Вывод исходного массива
    std::cout << "Элементы массива:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    // Вывод главной диагонали
    std::cout << "Главная диагональ:" << std::endl;
    for (int i = 0; i < rows && i < cols; ++i) {
        std::cout << matrix[i][i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}