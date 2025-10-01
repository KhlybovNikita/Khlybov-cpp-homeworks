// Программа: Приветствие пользователя 
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Задаём переменную для хранения имени
    string Name;

    // Программа запрашивет имя
    cout << "Введите имя: ";
    getline(cin, Name);

    // Вывод приветствия
    cout << "Зравствуйте " << Name << "! Чем я могу вам помочь?" << endl;

    return 0;
}