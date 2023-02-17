#include <iostream>
#include <math.h>
using namespace std;


void phuongTrinhBacHai(float a, float b, float c) {
    float x, x1, x2;
    float delta = (b * b) - ( 4 * a * c );

    if (delta > 0) {
        delta = sqrt(delta);
        cout << "Phuong trinh co 2 nghiem " << endl;
        x1 = (-b + delta) / (2 * a);
        cout << "Nghiem thu 1 la : " << x1 << endl;
        x2 = (-b - delta) / (2 * a);
        cout << "Nghiem thu 2 la : " << x2 << endl;
    } else if (delta == 0) {
        x = -b / (2 * a);
        cout << "Phuong trinh co nghiem kep : " << x << endl;
    } else {
        cout << "Phuong trinh vo nghiem" << endl;
    }
}

int main() {
    float a,b,c;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    phuongTrinhBacHai(a, b, c);
    return 0;
}