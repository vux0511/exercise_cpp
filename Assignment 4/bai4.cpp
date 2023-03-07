#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Inventory {
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

    public:
    // Default Constructor
    Inventory() {
        this->itemNumber = 0;
        this->quantity = 0;
        this->cost = 0;
        this->totalCost = 0;
    }

    // Constructor #2
    Inventory(int itemNumber, int quantity, double cost) {
        this->itemNumber = itemNumber;
        this->quantity = quantity;
        this->cost = cost;
        setTotalCost(quantity, cost);
    }

    // setItemNumber
    void setItemNumber(int itemNumber) {
        this->itemNumber = itemNumber;
    }

    // setItemNumber
    void setQuantity(int quantity) {
        this->quantity = quantity;
    }

    // setCost
    void setCost(double cost) {
        this->cost = cost;
    }

    // setCost
    void setTotalCost(int quantity, double cost) {
        this->totalCost = quantity * cost;
    }

    int getItemNumber() {
        return this->itemNumber;
    }

    int getQuantity() {
        return this->quantity;
    }

    double getCost() {
        return this->cost;
    }

    double getTotalCost() {
        return this->totalCost;
    }
};


int main() {
    int itemNumber;
	int quantity;
	double cost;
	double totalCost;

    cout << "Nhập số mặt hàng: ";
	cin >> itemNumber;
	while (itemNumber < 0)
	{
		cout << "Vui lòng nhập số lớn lớn 0 : ";
		cin >> itemNumber;
	}
	cout << "Số lượng mặt hàng là: ";
	cin >> quantity;
	while (quantity < 0)
	{
		cout << "Vui lòng nhập số lớn lớn 0 : ";
		cin >> quantity;
	}
	cout << "Giá của mặt hàng là: ";
	cin >> cost;
	while (cost < 0)
	{
		cout << "Vui lòng nhập số lớn lớn 0 : ";
		cin >> cost;
	}

	Inventory information(itemNumber, quantity, cost);

	totalCost = information.getTotalCost();
	itemNumber = information.getItemNumber();
	cost = information.getCost();
	quantity = information.getQuantity();
	cout << "Số mặt hàng : " << itemNumber << endl;
	cout << "Số lượng : " << quantity << endl;
	cout << "Giá : " << cost << endl;
	cout << "Tổng : " << totalCost << endl;

    return 0;
}




