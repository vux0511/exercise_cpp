#include <iostream>
#include <iomanip>
using namespace std;

void getData(double *, int);
void selectionSort(double *, int);
double getAverage(double *, int);
void displayData(double *, int, double);

int main() {
	double *Test,Average;		
	int Scores;			

	cout << "Nhap so luong diem: ";
	cin  >> Scores;

	Test = new double[Scores];	

	getData(Test, Scores);

	selectionSort(Test, Scores);

	Average = getAverage(Test, Scores);

	displayData(Test, Scores, Average);

	return 0;
}

void getData(double *Test, int Scores) {
	cout << "Nhap thu tu cac diem.\n";
	for (int i = 0; i < Scores; i++) {
		do {
			cout << "Diem thu " << (i + 1) << ": ";
			cin  >> *(Test + i);

			if (*(Test + i) < 0){
				cout << "Diem khong duoc be hon 0.\n"
					<< "Dien lai ";
			}
		} while (*(Test + i) < 0);
	}
}
void selectionSort(double *Test, int Scores) {
	int startscan, minIndex;
	double minValue;

	for (startscan = 0; startscan < (Scores - 1); startscan++) {
		minIndex = startscan;
		minValue = *(Test + startscan);
		for (int i = startscan + 1; i < Scores; i++) {
			if (*(Test + i) < minValue) {
				minValue = *(Test + i);
				minIndex = i;
			}
		}
		*(Test + minIndex) = *(Test + startscan);
		*(Test + startscan) = minValue;
	}
} 

double getAverage(double *Test, int Scores) {
	double Total;
	for (int i = 0; i < Scores; i++) {
		Total += *(Test + i);
	}
	return Total / Scores;
} 

void displayData(double *Test, int Scores, double Avg)  {
	cout << "\nDiem\n";
	cout << "So luong diem: " << Scores << endl;
	cout << "Diem theo thu tu tang dan:\n";
	for (int i = 0; i < Scores; i++) {
		cout << "#" << (i + 1) << ": " << *(Test + i) << endl;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "Diem trung binh: " << Avg << endl; 
}