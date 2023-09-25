

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
    double firstinput;
    double secondinput;
    double thirdinput;
    double fourthinput;
    string name;

    cout << "Enter a number with 3 decimal places" << endl;
    cin >> firstinput;
    cout << "Enter a number with 3 decimal places" << endl;
    cin >> secondinput;
    cout << "Enter a number with 3 decimal places" << endl;
    cin >> thirdinput;
    cout << "Enter a number with 3 decimal places" << endl;
    cin >> fourthinput;

    firstinput = ceil(firstinput * 100.0) / 100.0;
    secondinput = ceil(secondinput * 100.0) / 100.0;
    thirdinput = ceil(thirdinput * 100.0) / 100.0;
    fourthinput = ceil(fourthinput * 100.0) / 100.0;
    
    cout << setw(7) << firstinput << endl;
    cout << setw(7) << secondinput << endl;
    cout << setw(7) << thirdinput << endl;
    cout << setw(7) << fourthinput << endl;
    

    cout << "Enter your full name" << endl;
    cin.ignore();
    getline(cin, name);
    

    int even = name.length() % 2;

    if (even != 0) {
        cout << name.at(name.length() / 2);
    }
    else
        cout << "Your name does not contain a middle character" << endl;

}
