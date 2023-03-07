#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class RetailItem {
    string description;
    int unitsOnHand;
    double price;

    public:
    RetailItem(string description, int unitsOnHand, double price) {
        this->description = description;
        this->unitsOnHand = unitsOnHand;
        this->price = price;
    }

    void displayItem(RetailItem);

    string getDescription() {
		return this->description;
	}

	void setDescription(string description) {
		this->description = description;
	}

	int getUnitsOnHand() {
		return this->unitsOnHand;
	}

	void setUnitsOnHand(int unitsOnHand) {
		this->unitsOnHand = unitsOnHand;
	}

	double getPrice() {
		return this->price;
	}

	void setPrice(double price) {
		this->price = price;
	}

};

void displayItem(RetailItem item) {
    cout << "Description: " << item.getDescription() << endl;
    cout << "Units on hand: " << item.getUnitsOnHand() << endl;
    cout << "Price: $" << item.getPrice() << endl << endl;
}


int main() {
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);
        
    
    displayItem(item1);
    displayItem(item2);
    displayItem(item3);
    
    return 0;
}




