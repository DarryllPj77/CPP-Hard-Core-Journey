#include<iostream>
using namespace std;

int main(){
    cout << "Factorial Calculator" << endl;
    int factorial = 1;
    int num;

    cout << "Input a number to be facrial:";
    cin >> num;
    for(int i = 1; i <= num; i++){
        factorial = factorial * i;
        cout << "Loop: " << i << endl;
    }

    cout << "The factorial is: " << factorial << endl;


    return 0;
}