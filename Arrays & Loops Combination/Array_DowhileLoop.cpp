#include<iostream>
using namespace std; 


int main(){
    int grades [] = {60, 70, 80, 90, 100};

    int i = 0;
    cout << "Show grades:";
    while(i < 5){
        cout << grades[i] <<" ";
        i++;
    }

    return 0;
}