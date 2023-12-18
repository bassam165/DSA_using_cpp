#include<iostream>
#include<limits.h>
using namespace std;

void rowsum(int arr[][3], int row, int col){
    int max= INT_MIN;
    for( int col=0; col<3; col++){
        int sum=0;
        for(int row=0; row<3; row++){
            sum +=arr[row][col];
        }
        
        if(sum>max){
            max=sum;
        }
    }
    cout<<max;
}

int main()
{
    int arr[3][3]={{3,4,11},
                    {2,12,1},
                    {7,8,7}};
    rowsum(arr,3,3);
}
