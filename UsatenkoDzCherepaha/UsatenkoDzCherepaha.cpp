#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double day , vremya;
    cout << "Введiть кiлькiсть днiв , скiльки черепаха шла: "<<endl;
    cin >> vremya;
    for (double i = 1.5;i < vremya;i += 0.2) {
        cout <<"Cтiльки черепаха проходила за наступнi днi:  " << i << endl;
    }

}


