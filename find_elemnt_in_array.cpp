#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,6,2,3,6};
    int ans=0;
    for(int i=0; i<5; i++){
        ans=ans^arr[i];          //a^a=0  0^a=a
    }
    cout<<ans;
}