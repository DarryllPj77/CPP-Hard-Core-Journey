#include<iostream>

using namespace std;

int main(){
    int num_day;

    cout << "Welcome to Simple Week Day Scenario using SWITCH CASE" << endl;
    cout << "Please Input a number for the Day (1-7):";
    cin >> num_day;

    switch(num_day){
        case 1: 
            cout << "Monday" << endl;
            break;
        case 2: 
            cout << "Tuesday" << endl;
            break;
        case 3: 
            cout << "Wednesday" << endl;
            break;
        case 4: 
            cout << "Thursday" << endl;
            break;
        case 5: 
            cout << "Friday" << endl;
            break;
        case 6: 
            cout << "Saturday" << endl;
            break;
        case 7: 
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day Number" << endl;
    }


    return 0;
}