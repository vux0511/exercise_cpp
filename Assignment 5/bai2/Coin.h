//
//  Coin.h
//  Bai2
//
//  Created by Hoàng Văn Vũ on 20/03/2023.
//

#ifndef Coin_h
#define Coin_h


#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class Coin {
    private:
        string sideUp;
    
    public:
        // Default
        Coin();
        void toss();
        string getSidepUp();
        void display();
};


#endif /* Coin_h */
