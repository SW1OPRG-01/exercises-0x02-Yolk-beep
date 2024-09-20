#include "sum.h"
#include <vector>
#include <iostream>
using namespace std;

int summies(int x)
{
    int sum=0;
    while(x!=0){
        sum+=x;
        x--;
    }
    return sum;
}
int sumbombaclat(std::vector<int> lule){
    int x = lule.size();
    int y=0;
    int num=0;
    while (y!=x){
        num+=lule[y];
        y++;
    }
    int mean=num/x;
    return mean;
}
