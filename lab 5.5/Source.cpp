#include <iostream>
#include "Windows.h"
using namespace std;

// Рекурсивна функція для визначення кількості одиниць у двійковому представленні числа
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
    cout << "Введіть число n: ";
    cin >> n;

    int result = count1(n);
    cout << "Кількість одиниць у двійковому  числі " << n << ": " << result << endl;

    return 0;
}
