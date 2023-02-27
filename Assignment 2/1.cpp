#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fileInput;
    fileInput.open("../input1.txt");
    if (fileInput.fail()) {
        cout << "Fail!" << endl;
        return -1;
    } else { 
        cout << "Success!" << endl;
    }
    fileInput.close();


    string text;
    ifstream fileOutput("../input1.txt");

    while (getline (fileOutput, text)) {
        cout << text << endl;
    }

    fileOutput.close();
    return 0;
}
