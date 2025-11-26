#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
    unordered_map<int, int> num_map;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (num_map.find(complement) != num_map.end()) 
        {
            vector<int> result;
            result.push_back(num_map[complement]);
            result.push_back(i);
            return result;
        }
        num_map[nums[i]] = i;
    }
    return vector<int>();
}

int main() {
    vector<int> nums;
    int n, target;
    
    cout << "Введите количество элементов которое будет содержать массив: ";
    cin >> n;
    
    cout << "Введите все элементы массива: ";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    cout << "Введите сумму, целое число (target): ";
    cin >> target;
    
    vector<int> result = twoSum(nums, target);
    
    if (result.size() == 2) {
        cout << "Индексы: " << result[0] << ", " << result[1] << endl;
        cout << "Числа: " << nums[result[0]] << " + " << nums[result[1]] << " = " << target << endl;
    } else {
        cout << "Решение не найдено!" << endl;
    }
    
    return 0;
}