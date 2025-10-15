#include <iostream>
using namespace std;

int main() 
{
    char x;
    cout << "Введите символ: ";
    cin >> x ;
    
    cout << "Символ: " << x << endl;
    
    cout << "Код: " << (int)x << endl;
    
    cout << "Код следующего символа: " << (int)(x + 1) << endl;
    
    cout << "Следующий символ: " << (char)(x + 1) << endl;
    
    return 0;
}