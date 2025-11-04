//Программа Вариант 1 "Сумма чисел от 1 до N"
#include <iostream>
using namespace std;
int main()
{
    int n;
    int S = 0;
    cout << "Введите число N: ";
    cin >> n;
    cout << "Сумма чисел от 1 до " << n << ": " << endl;
    for (int i = 1; i <= n; i++)
    {
        S += i;
    }
    cout << S;
    
    return 0;
}