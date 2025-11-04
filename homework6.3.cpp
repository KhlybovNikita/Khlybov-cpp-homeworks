// Программа вариант 1 "Длина строки"
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;
    
    // Ввод строки от пользователя
    cout << "Введите строку на английском языке: ";
    getline(cin, input);
    
    // Вывод длины строки
    cout << "Длина строки: " << input.length() << endl;
    
    return 0;
}