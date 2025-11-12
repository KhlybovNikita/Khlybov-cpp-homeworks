// Программа "возвращение суммы трёх чисел" 

#include <iostream>
using namespace std;

// Функция, которая вычичляет сумму трёх чисел
int sumOfThree(int a, int b, int c) 
{
    return a + b + c;
}

int main() 
{
    int a, b, c;
    
    cout << "Введите три числа: ";
    cin >> a >> b >> c;
    
    int result = sumOfThree(a, b, c);
    cout << "Сумма трёх чисел: " << result << endl;
    
    return 0;
}