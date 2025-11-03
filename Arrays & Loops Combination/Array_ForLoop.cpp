//using for loop to display the values of grades

#include<iostream>
using namespace std; 


int main(){
    int grades [] = {60, 70, 80, 90, 100};

    cout << "Show grades:";
    for(int i = 0; i < 5; i++){
        cout << grades[i] <<" ";
    }

    return 0;
}