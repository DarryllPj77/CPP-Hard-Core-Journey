#include<iostream>
using namespace std;
//do-while loop → runs the code first, then checks the condition after.
int main(){
    string username, password;
    string correct_username = "Darryll";
    string correct_password = "#Darryll123";
    
    int attempts = 0;
    int max_attempts = 3;
    int left_attempts = 0;

    do {
        cout << "Enter your username: ";
        cin >> username;
        cout << "You entered username: " << username << endl;

        cout << "Enter your password: ";
        cin >> password;
        cout << "You entered password: " << password << endl;

        if(username == correct_username && password == correct_password){
            cout << "Login Successful!" << endl;
            break; // exits the loop immediately
        } else {
            attempts++;
            cout << "Invalid username or password." << endl;
            left_attempts = max_attempts - attempts;
            cout << "Attempts left: " << left_attempts << endl;
        }

    } while(attempts < max_attempts);

    if(attempts == max_attempts){
        cout << "Too many failed attempts. Account Locked!" << endl;
    }

    return 0;
}
