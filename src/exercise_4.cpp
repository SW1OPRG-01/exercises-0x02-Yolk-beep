/*Write a program that takes an integer as user-input and writes all even integers up and maybe including the
given integer input. Use a while-loop for iterating the integers.*/
#include <iostream>

using namespace std;



int main() {
    cout << "Please input an integer: ";
    int x;
    int y=0;
    cin>>x;
    while(y<x){
        if (y%2==0)
        cout << y << endl;
        y=y+2;
    }
    cout << x << endl;
    return 0;
}