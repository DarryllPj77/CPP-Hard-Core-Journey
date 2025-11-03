
//Game menu

#include<iostream>
using namespace std;

int main(){
    int choose = 0;

    while(choose != 3){
        cout << "====================" << endl;
        cout << "     Game Menu" << endl;
        cout << "====================" << endl;
        cout << "Choose an option" << endl;
        cout << "[1] Start the game" << endl;
        cout << "[2] Save the game" << endl;
        cout << "[3] Exit the game" << endl;
        cout << "Enter a number (1-3): ";
        cin >> choose;
        switch(choose){
            case 1:
                cout << "Game Starting ..." << endl;
                break;
            case 2:
                cout << "Game Saving ..." << endl;
                break;
            case 3:
                cout << "Exiting the Game ..." << endl;
                break;
            default:
                cout << "Invalid input please try again from (1-3)!" << endl;
        }
        cout << endl;

    };

    return 0;
}