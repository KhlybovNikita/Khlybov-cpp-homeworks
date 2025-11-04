// Программа вариант 1 "Вычисление площади круга"
#include <iostream>
using namespace std;
int main() 
{
    int R;
    const double Pi = 3.14;
    cout << "Введите радиус: ";
    cin >> R;
    double S = Pi * R * R;
    cout << "Площадь круга: " << S;

    return 0;
}