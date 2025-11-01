//Pass Classification using nested condition

#include<iostream>
using namespace std;

int main(){
    int student_grd;
    cout << "Grading System for Performance Classification" << endl;
    cout << "Please input your grade:";
    cin >> student_grd;
    cout << "You input grade: " << student_grd << endl;
    if(student_grd >= 60){
        cout << "You passed" << endl;
        if(student_grd >= 85){
            cout << "Excellent Performance" << endl; 
        }else{
            cout << "Satisfactory Performance" << endl;
        }
    }else{
        cout << "You Failed" << endl;
    }

    return 0;
}

//Logic
// ->grade cattegory (Pass or Failed)
//     ->grade classification (Excellent Performance or Satisfactory Performance)