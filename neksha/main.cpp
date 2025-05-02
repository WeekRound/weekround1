#include <iostream>
#include <iomanip>
#include <string>
#include <chrono>
#include <thread> 
using namespace std;
//bro start now
class Calculatory{
    public:
    int firstNumber;
    int secondNumber;
    int TheOperatorUsed;
    void innerFunc(){
        cout << "Enter first number: ";
        cin >> firstNumber;
        cout << "Enter second number: ";
        cin >> secondNumber;
        cout << "Enter operator (1 for +, 2 for -, 3 for *, 4 for /): ";
        cin >> TheOperatorUsed;
        cout << "The Numbers were added successfully. Your equation will be solved soon." << endl;
        this_thread::sleep_for(chrono::seconds(3));

        double result;
        bool valid = true;
        switch (TheOperatorUsed) {
            case 1:
                result = firstNumber + secondNumber;
                cout << "Result: " << firstNumber << " + " << secondNumber << " = " << result << endl;
                break;
            case 2:
                result = firstNumber - secondNumber;
                cout << "Result: " << firstNumber << " - " << secondNumber << " = " << result << endl;
                break;
            case 3:
                result = firstNumber * secondNumber;
                cout << "Result: " << firstNumber << " * " << secondNumber << " = " << result << endl;
                break;
            case 4:
                if (secondNumber == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                    valid = false;
                } else {
                    result = static_cast<double>(firstNumber) / secondNumber;
                    cout << "Result: " << firstNumber << " / " << secondNumber << " = " << result << endl;
                }
                break;
            default:
                cout << "Invalid operator selected." << endl;
                valid = false;
        }
        if (valid) {
            cout << "Calculation complete." << endl;
        }
    }
};

int main(){
    //mainFunction
    string wantMore= "yes";
    cout << "Welcome to the calculator program by Neksha!" << endl;   
    cout << "This program will help you to calculate the result of two numbers." << endl;
    cout << "Please wait while we load the program.." << endl;
    this_thread::sleep_for(chrono::seconds(3));
    Calculatory calc;
    calc.innerFunc();
    while (wantMore == "yes"){
        cout << "Do you want to calculate again? (yes/no): ";
        cin >> wantMore;
        if (wantMore == "yes"){
            calc.innerFunc();
        } else {
            cout << "Thank you for using the calculator program!" << endl;
            break;
        }
    }
}