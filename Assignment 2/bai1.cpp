#include <iostream>
using namespace std;

int array[3][3] {};
int sumDuongCheo1, sumDuongCheo2;
int a,b,c,d,e,f;

void insertArray() {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << "array[" << i << "][" << j << "] = ";
            cin >> array[i][j] ;
        }
    }
}

void showArray() {
    for( int i=0; i<3; i++) {
        for( int j=0; j<3; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}


void checkLoShuMagicSquare() {
    // Tinh tong cac dong
    for(int i=0; i<3; i++) {
        int sumRow1 = 0;
        int sumRow2 = 0;
        int sumRow3 = 0;
        for(int j=0; j<3; j++) {
            sumRow1 += array[0][j];
            sumRow2 += array[1][j];
            sumRow3 += array[2][j];
        }
        a = sumRow1;
        b = sumRow2;
        c = sumRow3;
    }

    // Tinh tong cac cot
    for(int i=0 ; i<3; i++) {
        int sumCol1 = 0;
        int sumCol2 = 0;
        int sumCol3 = 0;
        for(int j=0; j<3; j++) {
            sumCol1 += array[j][0];
            sumCol2 += array[j][1];
            sumCol3 += array[j][2];
        }
        d = sumCol1;
        e = sumCol2;
        f = sumCol3;
    }

    //Tinh tong duong cheo
    for( int i=0; i<3; i++) {
        for( int j=0; j<3; j++) {
            sumDuongCheo1 = array[0][0] + array[1][1] + array[2][2];
            sumDuongCheo2 = array[2][0] + array[1][1] + array[0][2];
        }
    }

    if(a == b && b == c && c == d && d == e && e == f && f == sumDuongCheo1 && sumDuongCheo1 == sumDuongCheo2) {
        cout << "Mang nay la Lo Shu Magic Square" << endl;
    } else {
        cout << "Mang nay khong phai la Lo Shu Magic Square" << endl;
    }
}



int main()
{
    int array[3][3],n,m;
    insertArray();
    showArray();
    checkLoShuMagicSquare();
    return 0;
}