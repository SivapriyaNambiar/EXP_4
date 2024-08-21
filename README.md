# EXPERIMENT 4  To study and implement C++ Bitwise Operators: -

#### 4. Bitwise Operators 

Bitwise Operators are the operators that are used to perform operations on the bit level on the integers. While performing this operation integers are considered as sequences of binary digits. In C++, we have various types of Bitwise Operators.

Bitwise AND (&)
Bitwise OR (|)
Bitwise XOR (^)
Bitwise NOT (~)
Left Shift (<<)
Right Shift (>>)


#### 1. Bitwise AND (&)
Bitwise AND operation is performed between two integers, It will compare each bit on the same position and the result bit will be set(1) only and only if both corresponding bits are set(1). The symbol which is used to perform bitwise AND operation is &.

#### 2. Bitwise OR (|)
If Bitwise OR operation is performed between two integers , It will compare each bit on same position and the result bit will be set(1) if any of corresponding bits are set(1). The symbol which is used to perform bitwise OR operation is |.

#### 3. Bitwise XOR (^)
If Bitwise XOR operation is performed between two integers , It will compare each bit on same position and the result bit will be set(1) if any of corresponding bits differ i.e. one of them should be 1 and other should be zero. The symbol which is used to perform bitwise XOR operation is ^.

#### 4. Bitwise NOT (~)
The Bitwise NOT operation is performed on a single number. It change the current bit to it’s complement , i.e. if current bit is 0 then in result it will be 1 and if current bit is 1 then it will become 0. It is denoted by the symbol ~.

#### 5. Left Shift (<<)
This operator shifts the bits of Integer to left side by specific number (As mentioned) . This left shift operation is equivalent to multiplying the integer by 2 power number of positions shifted. The symbol which is used to represent Left Shift Operator is <<.

#### Right Shift (>>)
This operator shifts the bits of Integer to right side by specific number (As mentioned) . This right shift operation is equivalent to dividing the integer by 2 power number of positions shifted. The symbol which is used to represent Left Shift Operator is >>.

## Code
~~~
/*
EXPREIMENT 4 - BITWISE OPERATORS (AND ,OR, NOT, XOR, LEFT SHIFT, RIGHT SHIFT)
*/


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

/*

OUTPUT OF THE CODE: -

The bitwise and value of 16 and 14 is: 0
The bitwise or value of 16 and 14 is: 30
The bitwsie xor value of 16 and 14 is: 30
The butwise not value of 16 is: -17
Left shifted value of a 32
Right shifted value 7

*/
~~~

### OUTPUT OF THE CODE
![image](https://github.com/user-attachments/assets/fe5abac8-83c4-40b2-971b-c1c29366f088)


