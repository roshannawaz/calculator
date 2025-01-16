#include <iostream>
#include <cmath>
#include <limits>
#include <cstdlib>
using namespace std;

// Function prototypes
void showMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double squareRoot(double a);
double modulusOperation(int a, int b);
void clearConsole();

int main() {
    int choice;
    double num1, num2;
    bool exitProgram = false;

    while (!exitProgram) {
        showMenu();

        cout << "Enter your choice: ";
        while (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << add(num1, num2) << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << subtract(num1, num2) << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << multiply(num1, num2) << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                } else {
                    cout << "Result: " << divide(num1, num2) << endl;
                }
                break;

            case 5:
                cout << "Enter the base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << power(num1, num2) << endl;
                break;

            case 6:
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 < 0) {
                    cout << "Error: Cannot calculate square root of a negative number." << endl;
                } else {
                    cout << "Result: " << squareRoot(num1) << endl;
                }
                break;

            case 7:
                int int1, int2;
                cout << "Enter two integers: ";
                cin >> int1 >> int2;
                if (int2 == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                } else {
                    cout << "Result: " << modulusOperation(int1, int2) << endl;
                }
                break;

            case 8:
                clearConsole();
                break;

            case 9:
                cout << "Exiting program. Goodbye!" << endl;
                exitProgram = true;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    }

    return 0;
}

void showMenu() {
    cout << "\n*** Calculator Menu ***\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Power\n";
    cout << "6. Square Root\n";
    cout << "7. Modulus\n";
    cout << "8. Clear Console\n";
    cout << "9. Exit\n";
    cout << "**********************\n";
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double a) {
    return sqrt(a);
}

double modulusOperation(int a, int b) {
    return a % b;
}

void clearConsole() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
