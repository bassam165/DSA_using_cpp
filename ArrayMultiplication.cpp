#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mul[10][10], r, c, i, j , k;
    
    cout << "enter row and collum number first mattrix: ";
    cin >> r >> c;

    while (c!=r)
    {
        cout << "Error! column of first matrix not equal to row of second.";
        cout << "Enter rows and columns for first matrix: ";
        cin >> r >> c;
    }
    
    //input for first array
    cout << "Enter first array element: ";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin >> a[i][j];
        }
    }
    
    //input for secnod array
    cout << "Enter secnod array element: ";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin >> b[i][j];
        }
    }
    
    //multiply array
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            mul[i][j]=0;    
            for(k=0;k<c;k++)    
            {    
            mul[i][j]+=a[i][k]*b[k][j];    
            }    
        }    
    }    
    
    //print array
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<< mul[i][j];
        }
    }
}
