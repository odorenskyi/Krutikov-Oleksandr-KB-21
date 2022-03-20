#include <iostream>
#include "ModulesKrutikov.h"
#include <locale>
#include <locale.h>
#include <windows.h>
using namespace std;


void Greetings()
{
    cout << "|====================|" << endl
         << "|Krutikov Oleksandr ";
    wcout << L"\x00A9  |";
    cout << endl
         << "|====================|" << endl;
}

void Inequality(char a, char b)
{
    if (a+5 >= b)
        cout << "a+5 >= b is true" << endl;
    else
        cout << "a+5 >= b is false" << endl;
}

double Change(int value)
{
   int k = 1, b = 0;
    while (value)
    {
        b += value%16*k;
        value/=16;
        k*=10;
    }
    return b;
}

void ChangeOut(int val)
{
    cout << val << "x10: " << val << "   " << val << "x16: 0" << Change(val) << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x, y, z;
    char a, b;
    cout << "Print x: ";
    cin >> x;
    cout << "Print y: ";
    cin >> y;
    cout << "Print z: ";
    cin >> z;
    cout << "Print a: ";
    cin >> a;
    cout << "Print b: ";
    cin >> b;
    Greetings();
    Inequality(a,b);
    ChangeOut(x);
    ChangeOut(y);
    ChangeOut(z);
    cout << s_calculation(x,y,z);
    return 0;
}
