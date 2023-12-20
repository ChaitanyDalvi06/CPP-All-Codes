#include <iostream>
using namespace std;
void swap(int &a ,int &b)            // temp  a   b  // (int &a , int &b )
{                                  //  4    4   5                                           
int temp= a;                       //  4    5   5
a=b;                               //  4    5   4 
b=temp;
}

int main()
{
    int a = 4,b = 5;
    cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    swap(a,b);
    cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}