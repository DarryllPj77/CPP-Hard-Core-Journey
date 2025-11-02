// Function Declaration (Prototype)
// Tells the compiler the function’s name, return type, 
//and parameters — declared before main() if definition is written after it.

//For Function Declaration syntax
//returnType functionName(parameterType1, parameterType2, ...);


//Example1.cpp
#include<iostream>
using namespace std;

//Function Declaration (Prototype) Tells the compiler the following: The name of the function, The return type, and The parameters it expects.
int addNumbers(int a, int b){
    //Function Body is where you write what the function does or the Function Definition
    return a + b;
}

//Function Call -> This is how you use or execute the function in main()
int main(){
    int sum = addNumbers(5, 10);
    cout << "The sum is: " << sum << endl;
    

    return 0;
}