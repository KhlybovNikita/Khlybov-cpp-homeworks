//Программа которая формирует массив логических значений (true / false), начиная с значения true
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<bool> flick_switch(const std::vector<std::string>& words) 
{
    std::vector<bool> result;
    bool current = true;

    for (const std::string& word : words) 
    {
        if (word == "flick") 
        {
            current = !current;
        }
        result.push_back(current);
    }

    return result;
}

int main() 
{
    std::string input_line;
    
    std::cout << "Введите все слова через пробел: ";
    std::getline(std::cin, input_line);
    
    
    std::vector<std::string> words;
    std::stringstream ss(input_line);
    std::string word;
    
    while (ss >> word) 
    {
        words.push_back(word);
    }
    
    // Проверяем ограничения по количеству слов
    if (words.size() > 100) 
    {
        std::cout << "Количество слов должно быть до 100!!!" << std::endl;
        return 1;
    }
    
    
    std::vector<bool> result = flick_switch(words);
    
    // Выводим ответ
    std::cout << "Ответ: [";
    for (size_t i = 0; i < result.size(); ++i) 
    {
        std::cout << (result[i] ? "true" : "false");
        if (i != result.size() - 1) 
        {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
    
    return 0;
}