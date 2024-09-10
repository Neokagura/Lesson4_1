
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int speed;
    int height;
    cout << "Введите скорость самолета: ";
    cin >> speed;
    cout << "Введите высоту: ";
    cin >> height;
    if (speed >= 750 && speed <= 850 && height>= 9000 && height<= 9500) {
        cout << "Эшелон верный!";
    }
    else {
        cout << "Эшелон неверный!";
    }
}

