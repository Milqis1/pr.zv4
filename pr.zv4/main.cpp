#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // �������� ��� ������� [a, b]
    int a, b;
    std::cout << "������ �������� �������� �������: ";
    std::cin >> a;
    std::cout << "������ �������� ���� �������: ";
    std::cin >> b;

    // ��������� ���������� ��� ������� ������ x � ������� [a, b]
    std::cout << "���������� ������� y = (x^3 + 7) / x ��� x � ������� [" << a << ", " << b << "]:" << std::endl;
    for (int x = a; x <= b; ++x) {
        // ��������� ��������� �������
        double y = static_cast<double>(x * x * x + 7) / x;

        // ��������� ����������
        std::cout << "x = " << x << ", y = " << y << std::endl;

        // ���� �� ������ �������� ������� ��������� ����������, ����� ��������������� break ���� ����� ������� ��������.
    }

    return 0;
}
