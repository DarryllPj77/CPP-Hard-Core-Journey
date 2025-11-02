


//Example2.cpp
//Scenario for Simple Calculator using Function and Definition
#include<iostream>
using namespace std;

//Addition
float Addition(float x, float y){
    return x + y;
}

//Subtraction
float Subtraction(float x, float y){
    return x - y;
}

//Multiplication
float Multiplication(float x, float y){
    return x * y;
}

//Division
float Division(float x, float y){
     if (y == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return x / y;
}

int main(){
    char choose; // single character for switch
    float num1, num2, result;
    
    cout << "Simple Calculator" << endl;
    cout << "Choose what Type of Arithmetic you will used!" << endl;
    cout << "Enter a character from this (+, -, *, /): ";
    cin >> choose;

    switch(choose){
        case '+':
            cout << "You chose Addition Arithmetic!" << endl;
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = Addition(num1, num2);
            cout << "The sum for " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            cout << "You chose Subtraction Arithmetic!" << endl;
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = Subtraction(num1, num2);
            cout << "The difference for " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            cout << "You chose Multiplication Arithmetic!" << endl;
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
           result = Multiplication(num1, num2);
            cout << "The product for " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            cout << "You chose Division Arithmetic!" << endl;
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = Division(num1, num2);
            cout << "The quotient for " << num1 << " / " << num2 << " = " << result << endl;
            break;
        default:
            cout << "Invalid choice! Please enter one of (+, -, *, /)." << endl;
            
    }

    return 0;
}