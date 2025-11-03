#include<iostream>
using namespace std; 


int main(){
    int grades [] = {60, 70, 80, 90, 100};

    cout << "Show grades:";
    int i = 0;
    do{ 
        cout << grades[i] <<" ";
        i++;
    }while(i < 5);

    return 0;
}