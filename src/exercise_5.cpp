/*make the program ask the user for number of die throws
Next make a vector<int> and load as many throws as the user prescribed.
Now calculate the mean of die values and print it
Make the mean calculation into a function*/

#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;



int main() {
    srand(5);

    cout << "Please enter a number of wanted dice throws: ";
    int d=0;
    int x;
    cin>>x;    
    vector<int> DiceThrows;
    while(d<x){
        int randomNumber = (rand()%6)+1;
        DiceThrows.push_back(randomNumber);
        d++;
    }
    int y=0;
    int num=0;
    for (int i = 0; i < x; i++)
    {
        cout<<DiceThrows[i]<<endl;
    }
    while (y!=x){
        num+=DiceThrows[y];
        y++;
    }
    cout << "The mean of the dice throws is: " << num/x<<endl;
    return 0;
}