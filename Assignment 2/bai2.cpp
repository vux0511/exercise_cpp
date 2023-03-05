#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int a, input, soNgayNamVien, tiGiaHangNgay, chiPhiThuoc, phiDichVu, tongtien;


void noiTru() {
    cout << "-------- Bệnh nhân nội trú! --------" << endl;

    cout << "Số ngày nằm viện: ";
    cin >> soNgayNamVien;
    if(soNgayNamVien > 0) {
        soNgayNamVien = soNgayNamVien;
    } else {
        cout << "Số ngày không được âm! Vui lòng nhập lại số ngày nằm viện : ";
        cin >> soNgayNamVien;
    }

    cout << "Tỷ giá hàng ngày : ";
    cin >> tiGiaHangNgay;
    if(tiGiaHangNgay > 0) {
        tiGiaHangNgay = tiGiaHangNgay;
    } else {
        cout << "Số không được âm! Vui lòng nhập lại: ";
        cin >> tiGiaHangNgay;
    }

    cout << "Chi phí thuốc bệnh viện : ";
    cin >> chiPhiThuoc;
    if(chiPhiThuoc > 0) {
        chiPhiThuoc = chiPhiThuoc;
    } else {
        cout << "Số không được âm! Vui lòng nhập lại: ";
        cin >> chiPhiThuoc;
    }

    cout << "Phí dịch vụ bệnh viện (xét nghiệm, v.v.) : ";
    cin >> phiDichVu;
    if(phiDichVu > 0) {
        phiDichVu = phiDichVu;
    } else {
        cout << "Số không được âm! Vui lòng nhập lại: ";
        cin >> phiDichVu;
    }

    tongtien = (soNgayNamVien * tiGiaHangNgay) + chiPhiThuoc + phiDichVu;
    cout << "Tổng tiền : " << tongtien << endl;
    a = tongtien;
}

int ngoaiTru() {
    cout << "-------- Bệnh nhân ngoại trú! --------" << endl;

    cout << "Phí dịch vụ bệnh viện (xét nghiệm, v.v.) : ";
    cin >> phiDichVu;
    if(phiDichVu > 0) {
        phiDichVu = phiDichVu;
    } else {
        cout << "Số không được âm! Vui lòng nhập lại: ";
        cin >> phiDichVu;
    }

    cout << "Chi phí thuốc bệnh viện : ";
    cin >> chiPhiThuoc;
    if(chiPhiThuoc > 0) {
        chiPhiThuoc = chiPhiThuoc;
    } else {
        cout << "Số không được âm! Vui lòng nhập lại: ";
        cin >> chiPhiThuoc;
    }

    tongtien = chiPhiThuoc + phiDichVu;
    cout << "Tổng tiền : " << tongtien << endl;
    return tongtien;
}

void total(){
    cout << "Bệnh nhân được nhập viện với tư cách là bệnh nhân ngoại trú hay nội trú"<< endl;
    cout << "Nếu là nội trú nhấn phím 1"<< endl;
    cout << "Nếu là nội ngoại nhấn phím 2"<< endl;
    cin >> input;

    switch (input) {
        case 1:
            noiTru();
            break;
        case 2:
            ngoaiTru();
            break;
        default:
            cout << "Nhập sai! Vui lòng nhập lại." << endl;
            break;
        }
}


void insertReport() {
    
}

int main() {
    total();

    ofstream outputReport("../report.txt");
    if(!outputReport){
        cerr << "Error!" << endl;
        return 1;
    }
    outputReport << a << endl;
    outputReport.close();

    return 0;
}