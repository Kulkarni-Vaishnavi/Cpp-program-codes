#include<iostream>
using namespace std;

// Function prototype

int sum(int, int);


int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1, num2); // function call
    
    return 0;
}
// function definition
int sum(int a, int b){ 
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    int c = a+b;
    return c;
}


