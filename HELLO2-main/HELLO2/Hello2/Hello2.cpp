#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
    string Name;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Як вас звуть? = ";
    cin >> Name;
    cout << "Доброго дня, " << Name << "!";
}