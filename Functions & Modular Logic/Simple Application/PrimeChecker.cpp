#include<iostream>
using namespace std;

bool isPrime(int num){
    if (num <= 1){
        return false;
    }

    for(int i = 2; i <= num/2; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout << "Prime Checker" << endl;
    cout << "Enter a number:";
    cin >> num;

    if(isPrime(num)){
        cout << num << " Is a prime number!" << endl;
    }else{
        cout << num << " Is not a prime number!" << endl;
    }

    return 0;
}

