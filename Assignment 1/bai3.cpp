#include <iostream>
using namespace std;

double timGiaTriTrungBinh(int array[], const int SIZE) {
    double trungbinh;

    if (SIZE % 2 != 0) {
        trungbinh = *(array + (SIZE / 2));
    } else
        trungbinh = (*(array + ((SIZE - 1) / 2)) + *(array + (SIZE / 2))) / 2.0;
        return trungbinh;
}

int main() {
    const int SIZE = 10;
    int numbers[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    double trungbinh = timGiaTriTrungBinh(numbers, SIZE);
    cout << "Gia tri trung binh la : " << trungbinh << endl;

    return 0;
}
