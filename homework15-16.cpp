// Программа. Проверка принадлежности точки окружности
#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    // Зададим параметры окружности
    const double cx = 2.0;
    const double cy = -1.0;
    const double r = 5.0;
    const double r_squared = r * r; 

    double x, y;
    
    // Вводим координаты точки
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;
    
    
    double distance_squared = pow(x - cx, 2) + pow(y - cy, 2);
    
    // Сравниваем
    if (distance_squared < r_squared) {
        cout << "Точка внутри окружности" << endl;
    } else if (fabs(distance_squared - r_squared) < 1e-9) 
    {
        
        cout << "Точка на границе окружности" << endl;
    } else 
    {
        cout << "Точка вне окружности" << endl;
    }

    return 0;
}