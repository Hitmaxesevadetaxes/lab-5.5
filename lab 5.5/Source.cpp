#include <iostream>
#include "Windows.h"
using namespace std;

// ���������� ������� ��� ���������� ������� ������� � ��������� ������������ �����
int count1 (int n)

{
   
    if (n == 0)
        return 0;
    else
        return 1 + count1(n & (n - 1));
}

int main()

{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "������ ����� n: ";
    cin >> n;

    int result = count1(n);
    cout << "ʳ������ ������� � ���������  ���� " << n << ": " << result << endl;

    return 0;
}
