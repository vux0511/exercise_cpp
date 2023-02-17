#include <iostream>
using namespace std;

int main()
{
    int speed, time;
    cout << "Toc do cua chiec xe la: ";
    cin >> speed;
    cout << "Chiec xe da di duoc bao nhieu gio: ";
    cin >> time;

    if (speed < 0 || time < 1) {
        cout << "Khong chap nhan so am cho toc do va khong chap nhan bat ky gia tri nao nho hon 1 cho thoi gian di chuyen" << endl;
    } else {
        for (int i = 1; i <= time; i++) {
                cout << "Gio thu " << i << " chiec xe di duoc : " << i * speed << "km" << endl;
        }
    }

    return 0;
}