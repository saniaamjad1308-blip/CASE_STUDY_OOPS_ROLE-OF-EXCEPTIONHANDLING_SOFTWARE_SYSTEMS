#include <iostream>
#include <fstream>
#include <stdexcept>
#include <limits>
#include <cmath>
#include <string>
using namespace std;

// Throws an exception if the divisor is zero.
double divideNumbers(double a, double b) {
    if (b == 0) {
        throw invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}

// Throws an exception if the input is outside the valid domain.
double calculateSquareRoot(double number) {
    if (number < 0) {
        throw domain_error("Square root of a negative number is not a real number.");
    }
    return sqrt(number);
}

// Throws an exception if the file cannot be opened.
void readFile(const string& fileName) {
    ifstream file(fileName);
    if (!file.is_open()) {
        throw runtime_error("Could not open the file: " + fileName);
    }

    string line;
    cout << "\nFile contents:\n";
    while (getline(file, line)) {
        cout << line << '\n';
    }
    file.close();
}

int main() {
    int choice;

    do {
        cout << "\n===== Exception Handling Demo =====\n";
        cout << "1. Divide two numbers\n";
        cout << "2. Calculate square root\n";
        cout << "3. Read a file\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Error: Please enter a valid menu number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        try {
            if (choice == 1) {
                double a, b;
                cout << "Enter two numbers: ";
                if (!(cin >> a >> b)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    throw invalid_argument("Please enter numeric values only.");
                }
                cout << "Result: " << divideNumbers(a, b) << '\n';
            }
            else if (choice == 2) {
                double number;
                cout << "Enter a number: ";
                if (!(cin >> number)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    throw invalid_argument("Please enter a valid number.");
                }
                cout << "Square root: " << calculateSquareRoot(number) << '\n';
            }
            else if (choice == 3) {
                string fileName;
                cout << "Enter file name (for example, data.txt): ";
                cin >> fileName;
                readFile(fileName);
            }
            else if (choice == 4) {
                cout << "Program closed safely.\n";
            }
            else {
                throw out_of_range("Menu choice must be between 1 and 4.");
            }
        }
        catch (const invalid_argument& error) {
            cout << "Input Error: " << error.what() << '\n';
        }
        catch (const domain_error& error) {
            cout << "Domain Error: " << error.what() << '\n';
        }
        catch (const out_of_range& error) {
            cout << "Range Error: " << error.what() << '\n';
        }
        catch (const exception& error) {
            // Handles other standard exceptions, including file errors.
            cout << "Error: " << error.what() << '\n';
        }

    } while (choice != 4);

    return 0;
}
