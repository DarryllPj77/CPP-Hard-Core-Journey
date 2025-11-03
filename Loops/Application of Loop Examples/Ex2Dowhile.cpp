

#include<iostream>
using namespace std;



int main(){
    string myPass, InputPass, myEmail, InputEmail;
        cout << "================================================" << endl;
        cout << "Sign up a Personal Gmail account" << endl;
        cout << "Please Enter your Email: ";
        cin >> myEmail;
        cout << "Email Entered is: " << myEmail << endl;
        cout << "Please Enter your Password: ";
        cin >> myPass;
        cout << "Password Entered is: " << myPass << endl;
        cout << endl;
        cout << "================================================" << endl;
    
    do{
        cout << "Sign in my Personal Gmail account" << endl;
        cout << "================================================" << endl;
        cout << "Please Enter your Email: ";
        cin >> InputEmail;
        cout << "Email Entered is: " << InputEmail << endl;
        cout << "Please Enter your Password: ";
        cin >> InputPass;
        cout << "Password Entered is: " << InputPass << endl;
        cout << "================================================" << endl;
        cout << endl;
        if(InputEmail == myEmail && InputPass == myPass){
            cout << "Successful sign in your Personal account" << endl;
        }else{
            cout << "You Entered an incorrect Email or Password" << endl;
        }


    }while(InputEmail != myEmail || InputPass != myPass);

    return 0;
}