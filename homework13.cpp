//Программа определяющая является ли входная строка валидной
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

bool isValid(const string& s) 
{
    // Проверим длину строки
    if (s.length() < 1 || s.length() > 10000) 
    {
        return false;
    }
    
    unordered_map<char, char> brackets = 
    {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };
    
    stack<char> st;
    
    for (char c : s) 
    {
        // Проверим на допустимые символы
        if (c != '(' && c != ')' && c != '[' && c != ']' && c != '{' && c != '}') 
        {
            return false;
        }
        
        
        if (brackets.count(c)) 
        {
            
            if (st.empty() || st.top() != brackets[c]) 
            {
                return false;
            }
            st.pop();
        } 
        
        else 
        {
            st.push(c);
        }
    }
    
    
    return st.empty();
}

int main() 
{
    string input;
    
    cout << "Введите строку, только с символами: '(', ')', '{', '}', '[', ']':" << endl;
    cout << "Длина строки должна быть в длину от 1 сивола до 10000. (ограничение)" << endl;
    
    
    getline(cin, input);
    
    
    bool result = isValid(input);
    
    // Выводим результат в формате true/false как в примерах задания
    if (result) 
    {
        cout << "true" << endl;
    } else 
    {
        cout << "false" << endl;
    }
    
    return 0;
}