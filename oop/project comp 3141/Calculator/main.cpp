// main.cpp
#include "test_cases.h"
#include <string>
#include <iostream> // Include the iostream library
#include <vector>

#include <cctype>
#include <sstream>
#include <typeinfo>

// user defined classes
#include "Operand.h"
#include "BasicCalculator.h"
#include "ScientificCalculator.h"

using namespace std;

 void printCalculatorSelection()
{
    cout <<"Select Calculator Type:" << endl;
    cout << "1. Basic Calculator"<< endl;
    cout << "2. Scientific Calculator"<< endl;
    cout << "3. Quit"<< endl;
}

vector<string> tokenize(string& expression) {
    stringstream ss(expression);
    string token;
    vector<string> result;

    while (ss >> token) {
        result.push_back(token);
    }

    return result;
}

void getOperatorAndOperand(vector<string>& expression_arr, vector<Operand>& operands_arr,vector<char>& operator_arr )
{
    // iterate each operators and operands
    for (const auto& item : expression_arr) {

        // check first char in the string
        if ( isdigit(item[0]) ) { // convert string operand to double, create Operand object, add to operand array
            Operand temp(stod(item));
            operands_arr.push_back(temp);
        }
        else{                        // if not digit take it as operands
            char oprt = item.at(0); // convert to operator to char
            operator_arr.push_back(oprt);
        }
    } // end iterate each operand and operators

} // end getOperatorAndOperand()

void displayMenu() {
    cout << "\nCalculator Menu:" << endl;
    cout << "1. Basic Calculator" << endl;
    cout << "2. Scientific Calculator" << endl;
    cout << "3. Quit" << endl;
}

void basicCalculator() {
    cout << "Basic Calculator Selected" << endl;
    string input;
    while (true) {
        cout << "Enter expression (or type 'quit' to exit): ";
        getline(cin, input);
        if (input == "quit") {
            break;
        }
        else {
            try {
            vector<string>tokenizeExpression = tokenize(input);
            vector<Operand>operands_arr;
            vector<char>operator_arr;

            getOperatorAndOperand( tokenizeExpression , operands_arr ,operator_arr);
            BasicCalculator temp(operands_arr,operator_arr);
            temp.setResult();

            cout <<"ans : " <<input << " is " << temp.getResult().getValue() << endl;
            }
            catch (const std::runtime_error &e){
                std::cerr << "Error: " << e.what() << std::endl;
            }
        }
    }
}

void scientificCalculator() {
    cout << "Scientific Calculator Selected" << endl;
    string input;
    while (true) {
        cout << "Enter scientific expression (or type 'quit' to exit): ";
        getline(cin, input);
        if (input == "quit") {
            break;
        }
        else {
            vector<string>tokenizeExpression = tokenize(input);
            vector<Operand>operands_arr;
            vector<char>operator_arr;

            getOperatorAndOperand( tokenizeExpression , operands_arr ,operator_arr);
            ScientificCalculator temp(operands_arr,operator_arr);
            temp.setResult();

            cout <<"ans : " <<input << " is " << temp.getResult().getValue() << endl;

        }
    }
}

int main() {
    testMenu();
    bool run = true;
    while (run) {
        displayMenu();
        int choice;
        cout << "Please select an option (1-3): ";
        cin >> choice;
        cin.ignore();


       if (choice == 1) {
            basicCalculator();
        } else if (choice == 2) {
            scientificCalculator();
        } else if (choice == 3) {
            cout << "Quitting the program." << endl;
            run = false; // terminate program
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    } // end while
    return 0;
}
