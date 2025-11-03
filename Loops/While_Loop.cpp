//Used when you want the loop to run at least once.


#include<iostream>
using namespace std;
//while loop → checks the condition before running the code.
int main(){
    string username, password;
    string correct_username = "Darryll";
    string correct_password = "#Darryll123";
    
    int attempts = 0;
    int max_attempts = 3;
    int left_attempts = 0;

    while(attempts < max_attempts){
        cout << "Enter your username: ";
        cin >> username;
        cout << "You entered username:" << username << endl;

        cout << "Enter your password: ";
        cin >> password;
        cout << "You entered password:" << password << endl;
        if(username == correct_username && password == correct_password){
            cout << "Login Successful!" << endl;
            break;
        }else{
            attempts = attempts + 1;
            cout << "Invalid username or password" << endl;
            left_attempts = (max_attempts - attempts);
            cout << "Attempts left:" << left_attempts << endl;    
        }
    }
    if(attempts == max_attempts){
        cout << "Too many failed attempts. Account Locked!" << endl;
    }

    return 0;
}