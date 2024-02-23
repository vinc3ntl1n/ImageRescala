#include <iostream>
#include "ConsoleGfx.h"
using namespace std;

string menu() {
    cout << "\nScalar Menu\n-----------\n0. Exit\n1. Load File\n2. Load Test Image\n3. Display Image\n4. Enlarge Image\n5. Shrink Image\n6. Show Image Properties\n" << endl;
    return "0";
}

int main() {
    ConsoleGfx* console = ConsoleGfx::getInstance();

    cout << "Welcome to the Image Scalar!\n" << endl;
    cout << "Displaying Spectrum Image:" << endl;
    console->displayImage(console->testRainbow);
    menu();
    cout << "Select a Menu Option: ";
    int userInput;
    while(userInput != 0)
    {
        cin >> userInput;
        switch(userInput)
        {
            case(1):
                break;
            case(2):
                break;
            case(3):
                break;
            case(4):
                break;
            case(5):
                break;
            case(6):
                break;
            default:
                break;
        }

    }

    return 0;
}


