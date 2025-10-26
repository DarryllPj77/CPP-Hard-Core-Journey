#include<iostream>
#include<math.h>
using namespace std;

#define Pi 3.14159265359

int main(){
    int radius;
    float area;
    

    cout << "Basic Calculator for Area of a Circle" << endl;
    cout << "Enter the radius of the circle :";
    cin >> radius;
    area = Pi * pow(radius, 2);
    cout << "The area of the circle with the radius of " << radius << " is " << printf("%.2f",area) << endl;
    cout << "The area of the circle with the radius of " << radius << " is " << area;
}