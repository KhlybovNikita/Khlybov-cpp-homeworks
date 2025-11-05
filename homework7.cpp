//Программа "Проверка числа на палиндром"
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Ввод: x = ";
    cin >> x;
    
    // Отрицательные числа не могут быть палиндромами
    if (x < 0) {
        cout << "false" << endl;
        return 0;
    }
    
    int orig = x;  // Сохраняем исходное число
    int reversed = 0;  // Переменная для развернутого числа
    
    // Разворачиваем число
    while (x > 0) {
        int lastdigit = x % 10;           // Получаем последнюю цифру
        reversed = reversed * 10 + lastdigit; // Добавляем цифру к развернутому числу
        x = x / 10;                   // Убираем последнюю цифру
    }
    
    // Сравниваем исходное число с развернутым
    if (orig == reversed) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}