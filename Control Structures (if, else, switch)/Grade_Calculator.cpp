#include<iostream>
using namespace std;


int main(){
    cout << "Grade Calculator (A-F)" << endl;
    int num; // grade in number
    string subject;
    cout << "Enter the subject name: ";
    cin >> subject;

    while (true) {
    cout << "Enter the grade of this subject: ";
    cin >> num;
        if(cin.fail()){
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input! Please enter a number grade only.\n";
        }else{
            break; 
        }
    }


    if(num >= 90){
        cout << "Subject: " << subject << endl;
        cout << "You Got an A Grade" << endl;
        cout << "Passed" << endl;
    }else if(num >= 80){
        cout << "Subject: " << subject << endl;
        cout << "You Got an B Grade" << endl;
        cout << "Passed" << endl;
    }else if(num >= 70){
        cout << "Subject: " << subject << endl;
        cout << "You Got an C Grade" << endl;
        cout << "Passed" << endl;
    }else if(num >= 60){
        cout << "Subject: " << subject << endl;
        cout << "You Got an D Grade" << endl;
        cout << "Passing score" << endl;
    }else if(num >= 0){
        cout << "Subject: " << subject << endl;
        cout << "You Got an F Grade" << endl;
        cout << "Failed" << endl;
    }
    else{
        cout << "Envalid Input should not be negative number" << endl;
    }


    return 0;
}