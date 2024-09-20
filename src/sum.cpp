#include "sum.h"

int summies(int x)
{
    int sum=0;
    while(x!=0){
        sum+=x;
        x--;
    }
    return sum;
}
