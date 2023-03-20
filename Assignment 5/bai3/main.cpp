//
//  main.cpp
//  Bai3
//
//  Created by Hoàng Văn Vũ on 20/03/2023.
//

#include "FreezingAndBoiling.h"

int main() {
    FreezingAndBoiling fab1;
    fab1.isWaterBoiling();
    fab1.input();
    
    if (fab1.isEthylFreezing()) {
        cout << "Ethyl Alcohol sẽ đóng băng"<< endl;
    }
    
    if (fab1.isEthylBoiling()) {
        cout << "Ethyl Alcohol sẽ sôi"<< endl;
    }
    
    if (fab1.isOxygenFreezing()) {
        cout << "Oxygen sẽ đóng băng"<< endl;
    }
    
    if (fab1.isOxygenBoiling()) {
        cout << "Oxygen sẽ sôi"<< endl;
    }
    
    if (fab1.isWaterFreezing()) {
        cout << "Nước sẽ đóng băng"<< endl;
    }
    
    if (fab1.isWaterBoiling()) {
        cout << "Nước sẽ sôi" << endl;
    }
    
    return 0;
}
