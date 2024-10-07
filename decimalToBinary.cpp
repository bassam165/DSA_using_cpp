#include <iostream>
using namespace std;

int main()
{
    int dec, ans = 0, pow = 1;
    cout<<"input deimal number: ";
    cin>> dec;
    
    while(dec > 0){
        int rem = dec % 2;
        dec /= 2;
        ans += rem * pow;
        pow *= 10;
    }
    cout<<"Binary number is: "<<ans;
    return 0;
}
