// 2.12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "ru");
    int k;
    bool n = true;
    bool z = false;
    int x, y;
    cout << "Введите икс и игрик: \n";
    cin >> x >> y;
    k = pow(x, 2) + pow(y, 2);
    if (k <= 4) {
        cout << "Значение логического выражения: " << n << endl;
    }
    else
        cout << "Значение логического выражения: " << z << endl;
}