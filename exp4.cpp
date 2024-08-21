#include<iostream>
using namespace std;

int main()
{
    int a = 16; // 16 in binary is 10000
    int b = 14; // 14 in binary is 01110
    int c = a & b;
    int d = a | b;
    int e = a ^ b ;
    int f = ~a;
    cout << "The bitwise and value of 16 and 14 is: "<< c<< endl;
    cout << "The bitwise or value of 16 and 14 is: "<< d<< endl;
    cout << "The bitwsie xor value of 16 and 14 is: "<< e<< endl;
    cout << "The butwise not value of 16 is: "<< f<< endl;
    cout << "Left shifted value of a "<< (a<<1)<< endl;
    cout << "Right shifted value "<< (b>>1)<< endl;
    return 0;

}