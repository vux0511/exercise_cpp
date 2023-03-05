#include <iostream>
using namespace std;


void swap(int a, int b) {
    int temp;
    int *num1, *num2;

    num1 = &a;
    num2 = &b;
    
    temp = *num2;
    *num2 = *num1;
    *num1 = temp;

    cout << "Giá trị sau khi hoán đổi là:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}



int main() {
    int a = 3;
    int b = 6;
    
    cout << "Giá trị trước khi hoán đổi là:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b);
    return 0;
}
