//For Loop used when the number of iteration is known
//For loop inside a for loop
#include<iostream>
using namespace std;


int main(){
    cout << "For Loop to simulation of counting from 1 to 10" << endl;
    for(int i = 1; i <= 10; i++){
        cout << "Count: " << i << endl;
        for(int j = 1; j <= 2; j++){
            cout << "Subcount: " << j << endl;
        }
    }

    return 0;
}