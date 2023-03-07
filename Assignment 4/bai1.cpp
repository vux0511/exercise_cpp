#include <iostream>
using namespace std;

class Employee {
    string name;
    int idNumber;
    string department;
    string position;
    
    public:
    Employee() {
        this->name = "";
        this->idNumber = 0;
        this->department = "";
        this->position = "";
    };

    Employee(string name, int idNumber, string department, string position) {
        this->name = name;
        this->idNumber = idNumber;
        this->department = department;
        this->position = position;
    };

    Employee(string name, int idNumber) {
        this->name = name;
        this->idNumber;
    };
    
    string getName() {
		return this->name;
	}

	void setName(string name) {
		this->name = name;
	}

	int getIdNumber() {
		return this->idNumber;
	}

	void setIdNumber(int idNumber) {
		this->idNumber = idNumber;
	}

	string getDepartment() {
		return this->department;
	}

	void setDepartment(string department) {
		this->department = department;
	}

	string getPosition() {
		return this->position;
	}

	void setPosition(string position) {
		this->position = position;
	}

    void display() {
        cout << this->idNumber << " - " << this->name << " - " << this->department << " - " << this->position << endl;
    }

};

int main() {
    
    Employee persson1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee persson2("Mark Jones", 39119, "IT", "Programmer");
    Employee persson3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    persson1.display();
    persson2.display();
    persson3.display();

    return 0;
}

