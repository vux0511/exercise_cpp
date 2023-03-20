//
//  FreezingAndBoiling.h
//  Bai3
//
//  Created by Hoàng Văn Vũ on 20/03/2023.
//

#ifndef FreezingAndBoiling_h
#define FreezingAndBoiling_h

#include <iostream>
using namespace std;

class FreezingAndBoiling {
    private:
        int Alcohol_Freezing = -173;
        int Alcohol_Boiling = 172;
        int Oxygen_Freezing = -362;
        int Oxygen_Boiling = -306;
        int Water_Freezing = 32;
        int Water_Boiling = 212;
        int temp;
    public:
    
        bool isEthylFreezing();
        bool isEthylBoiling();
        bool isOxygenFreezing();
        bool isOxygenBoiling();
        bool isWaterFreezing();
        bool isWaterBoiling();
        void display();
        void input();
    
};

#endif /* FreezingAndBoiling_h */
