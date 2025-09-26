#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string str = "AaBbCcDdEe";

    string uppercase, lowercase;

    // Копируем каждый второй символ начиная с 0
    for (int i = 0; i < str.size(); i += 2) {
        uppercase.push_back(str[i]);
    }

    // Копируем каждый второй символ начиная с 1
    for (int i = 1; i < str.size(); i += 2) {
        lowercase.push_back(str[i]);
    }

    cout << "Заглавные: " << uppercase << endl;
    cout << "Строчные: " << lowercase << endl;

    return 0;
}