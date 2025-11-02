#include <iostream>
#include <cmath>  // for sqrt
using namespace std;

bool isPrime(long long num) {
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;

    // check divisibility up to sqrt(num)
    for (long long i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    long long first_num, second_num, even_number;

    cout << "Goldbach's Conjecture Proof" << endl;
    cout << "Please Enter First prime number: ";
    cin >> first_num;
    cout << "Please Enter Second prime number: ";
    cin >> second_num;

    if (isPrime(first_num) && isPrime(second_num)) {
        cout << "These are both prime numbers" << endl;
        even_number = first_num + second_num;
        cout << "Their sum is " << even_number << ", which is an even number." << endl;
    } else {
        cout << "These are not prime numbers" << endl;
        cout << "Maybe these are odd or even numbers" << endl;
    }

    return 0;
}
