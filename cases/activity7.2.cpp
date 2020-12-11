#include<iostream>

using namespace std;

int main(){

    int fib[20];
    int x = 0;
    int y = 1;
    int z;


    /* calculate first 20 fib sequence */
    int i = 0;
    while (i<20)
    {
        z = x + y;
        x = y;
        y = z;
        fib[i] = x;
        i++;
    }
    
    /* print first 20 fib sequence */
    int f=0;
    while(f<20)
    {
       cout << fib[f] << ", ";
       f++;
    }
    

    return 0;
}