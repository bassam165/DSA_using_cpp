#include <iostream>
using namespace std;

int main()
{
    int bin, ans = 0, pow = 1;
    cout<<"input binary number: ";
    cin>> bin;
    
    while(bin > 0){
        int rem = bin % 10;
        bin /= 10;
        ans += rem * pow;
        pow *= 2;
    }
    cout<<"Decimal number is: "<<ans;
    return 0;
}
