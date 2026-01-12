// Программа для нахождения индексов двух элементов, сумма которых равна target
#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <string>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
    unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) 
    {
        int complement = target - nums[i];
        
        if (numMap.find(complement) != numMap.end()) 
        {
            return {numMap[complement], i};
        }
        
        numMap[nums[i]] = i;
    }
    
    return {};
}

int main() 
{
    vector<int> nums;
    string input;
    int target;

    // Вводим массив
    cout << "Введите числа массива через пробел: ";
    getline(cin, input);
    
    stringstream ss(input);
    int num;
    while (ss >> num) 
    {
        nums.push_back(num);
    }

    // Проверяем чтобы массив содержал не меньше двух элементов
    if (nums.size() < 2) 
    {
        cout << "Массив должен содержать не меньше 2 элементов" << endl;
        return 1;
    }

    
    cout << "Введите число (target): ";
    cin >> target;

    // Нахаодим индексы
    vector<int> result = twoSum(nums, target);

    // Выводим результат
    if (!result.empty()) {
        cout << result[0] << ", " << result[1] << endl;
    } else {
        cout << "Ответ не найден" << endl;
    }

    return 0;
}