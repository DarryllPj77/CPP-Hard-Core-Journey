#include<iostream>
using namespace std;


int main(){
    int num, product;
    cout << "Multiplication Table from 1-10" << endl;
    cout << "Enter the number to make a multiplication table: ";
    cin >> num;

    //Make the rows from 0-10
    for(int j = 0; j <= num; j++){
        cout << j << "\t";
    }
    cout << endl;
    //Make the columns from 1-10
    for(int i = 1; i <= num; i++){
        cout << i << "\t";
        //Make the multiplier from 1 - 10
        for(int j = 1; j <= num; j++){
            cout << i * j << "\t";
        }
        cout << endl;
    }
    
    return 0;
}