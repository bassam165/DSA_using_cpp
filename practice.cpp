#include<iostream>
using namespace std;

void rowsum(int arr[][3], int row, int col){
    for( int col=0; col<3; col++){
        int sum=0;
        for(int row=0; row<3; row++){
            sum +=arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[3][3]={{3,4,11},
                    {2,12,1},
                    {7,8,7}};
    rowsum(arr,3,3);
}