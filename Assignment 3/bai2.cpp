#include <iostream>
using namespace std;

void sumArray(int arr[], int size) {
    int sum = 0;
    int *iPtr;
    iPtr = arr;

    for (int i = 0; i < size; i++) {
        cout << "arr["<< i <<"] = ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        sum = sum + *(iPtr + i);
    }
    cout << "Tổng của các giá tri trong mảng là : " << sum << endl;
    // helllo
}

int main() {
    int size = 0;
    int arr[] = {};
    cout << "Nhập số lượng các phần tử để lưu trữ trong mảng (tối đa 10): " << endl;
    cin >> size;
    if( size > 10 ) { 
        size = 10;
    } else {
        size = size;
    }
    sumArray(arr, size);
    return 0;
}
