//
//  Coin.cpp
//  Bai2
//
//  Created by Hoàng Văn Vũ on 20/03/2023.
//


#include "Coin.h"

Coin::Coin() {
    srand(time(0));
    if(rand()%2 == 0) {
        this->sideUp = "Ngửa";
    } else {
        this->sideUp = "Sấp";
    }
}

void Coin::toss() {
    srand(time(0));
    if(rand()%2 == 0) {
        this->sideUp = "Ngửa";
    } else {
        this->sideUp = "Sấp";
    }
}

string Coin::getSidepUp() {
    return this->sideUp;
}


void Coin::display() {
    for (int i = 0; i < 20 ; i++) {
        toss();
        cout << this->getSidepUp() << endl;
    }
}

