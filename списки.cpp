#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");//��������� ���������� ��� �������� 
    // ������� ������ �� 7 �����
    int numbers[7] = { 2, 4, 6, 8, 10, 13, 17 };
    int sum = 0;

    // �������� �� ���� ��������� �������
    for (int i = 0; i < 7; i++) {
        sum += numbers[i]; // ��������� ������ ����� � �����
    }

    // ��������� ������� ��������
    double average = static_cast<double>(sum) / 7;

    // ������� ����������
    cout << "������: ";
    for (int i = 0; i < 7; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";
    cout << "�����: " << sum << endl;
    cout << "�������: " << average << endl;

    return 0;
}