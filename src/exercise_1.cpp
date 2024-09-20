/*Implement a program that takes a positive integer as user-input and returns the sum of all posi􀆟ve integers
up to and including the given integer.
Use a while-loop for calculating the sum.*/
#include <iostream>
using namespace std;

int main() {
    cout<< "Please enter a positive integer"<<endl;
    int x;
    int sum=0; 
    cin>>x;
    while(x!=0){
        sum+=x;
        x--;
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}