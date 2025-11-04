//Программа Вариант 1 "Проверка на високосный год"
#include <iostream>
using namespace std;
int main()
{
    int Y;
    cout << "Введите год: ";
    cin >> Y;
    if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0))
    {
        cout << "Год високосный";
    }
    else {
    cout << "Год не является високосным";
    }
    
    return 0;
}