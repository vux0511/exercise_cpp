#include <iostream>
using namespace std;

class Car {
    int yearModel;
    string make;
    int speed;

    public:
    Car(int yearModel, string make) {
        this->yearModel = yearModel;
        this->make = make;
        this->speed = 0;
    };


	int getYearModel() {
		return this->yearModel;
	}

	void setYearModel(int yearModel) {
		this->yearModel = yearModel;
	}

	string getMake() {
		return this->make;
	}

	void setMake(string make) {
		this->make = make;
	}

	int getSpeed() {
		return this->speed;
	}

	void setSpeed(int speed) {
		this->speed = speed;
	}

    int accelerate() {
        return speed += 5;
    }

    int carBreak() {
        return speed -= 5;
    }

    void display() {
        cout << "Year Model: " << yearModel << " - Name Car: " << make << endl;
    }
};


int main() {
    Car bmw(1990, "BMW");
    bmw.display();

    for(int i = 0; i <= 5; i++) {
        cout << "Tốc độ của chiếc xe là: " << bmw.accelerate() << endl;
    }
    cout << "----------------" << endl;
    for(int i = 0; i <= 5; i++) {
        cout << "Tốc độ của chiếc xe là: " << bmw.carBreak() << endl;
    }
    return 0;
}

