#include<iostream>
using namespace std;

int main(){
    float C, F; 

    cout << "Simple Celsius to Fahrenheit Converter" << endl;
    cout << "Enter Farenheit that will be coverted :";
    cin >> F;
    cout << "Enter Celsius that will be coverted :";
    cin >> C;
    cout << "Output Conversion" << endl;
    F = ((C * 9.0/5) + 32);
    C = ((F - 32) * 5.0/9); // or ((F - 32) / 1.8)
    cout << "The Farenheit to Celsius: " << printf("%.2f", C) << endl;
    cout << "The Celsius to Farenheit: " << printf("%.2f", F) << endl;
    




    return 0;
}