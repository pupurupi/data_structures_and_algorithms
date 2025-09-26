#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    //Исходная строка
    string str = "AaBbCcDdEe";

    string uppercase, lowercase;

    // Получаем заглавные буквы (каждая вторая буква, начиная с индекса 0)
    for (int i = 0; i < str.size(); i += 2) {
        uppercase.push_back(str[i]);
    }

    //Получаем строчные буквы (каждая вторая буква, начиная с индекса 1)
    for (int i = 1; i < str.size(); i += 2) {
        lowercase.push_back(str[i]);
    }

    cout << "Заглавные буквы: " << uppercase << endl;
    cout << "Строчные буквы: " << lowercase << endl;

    return 0;

}
