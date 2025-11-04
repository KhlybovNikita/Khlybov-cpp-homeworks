// Программа вариант 1 "Длина строки"
#include <iostream>
#include <string>

int main() 
{
    std::string input;
    
    // Ввод строки от пользователя
    std::cout << "Введите строку на английском языке: ";
    std::getline(std::cin, input);
    
    // Вывод длины строки
    std::cout << "Длина строки: " << input.length() << std::endl;
    
    return 0;
}