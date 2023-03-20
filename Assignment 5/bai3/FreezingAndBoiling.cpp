//
//  FreezingAndBoiling.cpp
//  Bai3
//
//  Created by Hoàng Văn Vũ on 20/03/2023.
//

#include "FreezingAndBoiling.h"

bool FreezingAndBoiling::isEthylFreezing() {
    if(this->temp <= -173) {
        return true;
    } else {
        return false;
    }
}

bool FreezingAndBoiling::isEthylBoiling() {
    if(this->temp >= 172) {
        return true;
    } else {
        return false;
    }
}

bool FreezingAndBoiling::isOxygenFreezing() {
    if(this->temp <= -362) {
        return true;
    } else {
        return false;
    }
}

bool FreezingAndBoiling::isOxygenBoiling() {
    if(this->temp >= -306) {
        return true;
    } else {
        return false;
    }
}

bool FreezingAndBoiling::isWaterFreezing() {
    if(this->temp <= 32) {
        return true;
    } else {
        return false;
    }
}

bool FreezingAndBoiling::isWaterBoiling() {
    if(this->temp >= 212) {
        return true;
    } else {
        return false;
    }
}

void FreezingAndBoiling::display() {
    cout << this->Water_Freezing << endl;
}

void FreezingAndBoiling::input() {
    cout << "Nhập nhiệt độ: ";
    cin >> this->temp;
}
