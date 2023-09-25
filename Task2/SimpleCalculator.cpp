#include<bits/stdc++.h>
using namespace std;

// Function will perform addition of two numbers.
double addTwoNumbers(double a, double b) {
    return a + b;
}

// Function will perform subtraction of two numbers.
double subtractTwoNumbers(double a, double b) {
    return a - b;
}

// Function will perform multiplication of two numbers.
double multiplyTwoNumbers(double a, double b) {
    return a * b;
}

// Function will perform division of two numbers.
double divideTwoNumbers(double a, double b) {
    if (b == 0) {
        cout << "Cannot divide by zero" << endl;
        return 0;
    }
    return a / b;
}

int main(){
    // Declaring Variables
    char operation;
    double num1,num2;

    cout << "Options:" << endl;
    cout << "Enter '+' for addition" << endl;
    cout << "Enter '-' for subtraction" << endl;
    cout << "Enter '*' for multiplication" << endl;
    cout << "Enter '/' for division" << endl;

    // Asking from the user to choose the operation to perform.
    cout<<"Enter the operation You want to perform: "<<endl;
    cin>>operation;

    // User input of two numbers
    cout<<"Enter Num1: "<<endl;
    cin>>num1;
    cout<<"Enter Num2: "<<endl;
    cin>>num2;

    // Using switch case and accordingly calling the function.̥
    switch(operation){
        case '+':
            cout<<"Result: "<< addTwoNumbers(num1, num2)<<endl;
            break;
        case '-':
            cout<<"Result: "<< subtractTwoNumbers(num1, num2)<<endl;
            break;
        case '*':
            cout<<"Result: "<< multiplyTwoNumbers(num1, num2)<<endl;
            break;
        case '/':
            cout<<"Result: "<< divideTwoNumbers(num1, num2)<<endl;
            break;
        default:
            cout<<"Invalid Operation! Please enter valid operation."<<endl;
    }
    return 0;
}