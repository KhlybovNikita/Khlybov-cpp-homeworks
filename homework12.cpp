#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    double score;

public:

    // Конструктор по умолчанию
    
    Student() : name(""), age(0), score(0.0) {}
    
    // Конструктор с параметрами инициализации полей
    
    Student(string n, int a, double s) : name(n), age(a), score(s) {}
    
    // Сеттеры и геттеры для всех полей
    
    string getName() const { return name; }
    void setName(string n) { name = n; }
    
    int getAge() const { return age; }
    void setAge(int a) { age = a; }
    
    double getScore() const { return score; }
    void setScore(double s) { score = s; }
    
    // Метод void show(), выводящий информацию о студенте

    void show() const {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << endl;
        cout << "Средний балл: " << score << endl;
    }
    
    // Метод bool isAdult() const, возвращающий признак совершеннолетия
    
    bool isAdult() const {
        return age >= 18;
    }
    
    // Модификация метода show() с информацией о совершеннолетии
    
    void showEnhanced() const {
        show();
        cout << "Совершеннолетний: " << (isAdult() ? "да" : "нет") << endl;
    }
    
    /* Метод void updateScore(double delta), , изменяющий значение среднего 
       балла на величину delta (значение может быть как положительным, 
       так и отрицательным).*/ 
       
    void updateScore(double delta) {
        score += delta;
        if (score < 0) score = 0;
    }
};

int main() {
    
    // Код для ввода данных пользователем
    
    string name;
    int age;
    double score;
    
    cout << "Введите имя студента: ";
    getline(cin, name);
    
    cout << "Введите возраст студента: ";
    cin >> age;
    
    cout << "Введите средний балл студента: ";
    cin >> score;
    
    // Применяем конструктор параметров и формируем объект
    
    Student student(name, age, score);
    
    
    cout << "\nОсновная информация о студенте:" << endl;
    student.show();
    
    cout << "\nДополненная информация о студенте:" << endl;
    student.showEnhanced();
    
    cout << "\nПроверка студента на совершеннолетие:" << endl;
    cout << "Совершеннолетний: " << (student.isAdult() ? "да" : "нет") << endl;
    
    // Код для ввода изменения балла пользователем
    
    double delta;
    cout << "\nКак изменился средний балл студента? (введите изменение): ";
    cin >> delta;
    
  
    student.updateScore(delta);
    
    cout << "\nДополненная информация с изменённым баллом студента:" << endl;
    student.showEnhanced();
    
    return 0;
}