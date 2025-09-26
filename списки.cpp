#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");//установка кодироваки для русского 
    // Создаем массив из 7 чисел
    int numbers[7] = { 2, 4, 6, 8, 10, 13, 17 };
    int sum = 0;

    // Проходим по всем элементам массива
    for (int i = 0; i < 7; i++) {
        sum += numbers[i]; // Добавляем каждое число к сумме
    }

    // Вычисляем среднее значение
    double average = static_cast<double>(sum) / 7;

    // Выводим результаты
    cout << "Массив: ";
    for (int i = 0; i < 7; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";
    cout << "Сумма: " << sum << endl;
    cout << "Среднее: " << average << endl;

    return 0;
}