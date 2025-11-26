#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> romanValues =
    {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
    int result = 0;
    int n = s.length();
    
    for (int i = 0; i < n; i++) 
    {
        
        
        /* При условии, если значение текущего введённого пользователем символа меньше,
        чем значение следующего, то вычитаем его.*/
        
        if (i < n - 1 && romanValues[s[i]] < romanValues[s[i + 1]])
        {
            result -= romanValues[s[i]];
        } else 
        {
            
            
            // Иначе прибавляем значение текущего символа
            
            result += romanValues[s[i]];
        }
    }
    
    return result;
}

int main() 
{
    string romanNumeral;
    
    cout << "Введите римское число: ";
    cin >> romanNumeral;
    
    int decimalValue = romanToInt(romanNumeral);
    
    cout << "Десятичное значение: " << decimalValue << endl;
    
    return 0;
}