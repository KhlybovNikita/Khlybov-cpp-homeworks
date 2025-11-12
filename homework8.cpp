#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string word;
    
    cout << "Введите слово или словосочетание для проверки на изограмму: ";
    getline(cin, word);
    
    bool result = true;
    
    for (int i = 0; i < word.length(); i++) 
    {
        if (word[i] == ' ') continue; // для пропуска пробелов
        
        for (int j = i + 1; j < word.length(); j++) 
        {
            if (word[j] == ' ') continue; // для пропуска пробелов
            
            if (word[i] == word[j]) 
            {
                result = false;
                break;
            }
        }
        
        if (!result) break;
    }
    
    cout << "Результат: " << (result ? "true" : "false") << endl;
    
    return 0;
}