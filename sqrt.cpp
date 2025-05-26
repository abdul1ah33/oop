#include <iostream>
#include <cmath>

using namespace std;

int sqroot(int x)
{
    double btngan;
    double xDouble = (double) x;
    for (int i=1; i<x; i++)
    {
        btngan = (xDouble/i);

        if (i == ceil(btngan))
            if(x%i == 0)
                return i;
            else
                return i-1;
    }
}

int main(void)
{
    cout<<sqroot(8)<<endl;
    cout<<sqroot(16)<<endl;
    cout<<sqroot(100)<<endl;
    cout<<sqroot(8)<<endl;
}