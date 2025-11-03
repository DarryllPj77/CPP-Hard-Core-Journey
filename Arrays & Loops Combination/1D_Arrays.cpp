
//1D Arrays (One-Dimensional Arrays)
//dataType arrayName[size];

#include<iostream>
using namespace std;


int main(){
    int scores[5];  // declaration
    int grades[5] = {90, 85, 88, 92, 76}; // initialization

    cout << grades[1] << endl; //85
    cout << grades[3] << endl; //92
 
    cout << grades[2] << endl; //88
    cout << grades[0] << endl;//90

    return 0;
}