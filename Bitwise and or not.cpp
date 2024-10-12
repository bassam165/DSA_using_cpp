#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 8;
    cout<<"Bitwise And " << (a & b) <<endl;
    cout<<"Bitwise Or " <<(a | b) <<endl;
    cout<<"Bitwise Xor " <<(a ^ b) <<endl;
    cout<<"Bitwise Leftshift " <<(a << 1) <<endl;
    cout<<"Bitwise Rightshift " <<(a >> 1) <<endl;

    return 0;
}
