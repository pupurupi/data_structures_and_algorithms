#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string str = "AaBbCcDdEe";

    string uppercase, lowercase;

    // �������� ������ ������ ������ ������� � 0
    for (int i = 0; i < str.size(); i += 2) {
        uppercase.push_back(str[i]);
    }

    // �������� ������ ������ ������ ������� � 1
    for (int i = 1; i < str.size(); i += 2) {
        lowercase.push_back(str[i]);
    }

    cout << "���������: " << uppercase << endl;
    cout << "��������: " << lowercase << endl;

    return 0;
}