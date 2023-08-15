#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[5]={2,5,5,3,2};
    for(int i=0; i<5; i++){
        int c=0;
        for(int j=0; j<5; j++){
            if(i!=j){
                if(a[i]=a[j]){
                    c++;
                }
            }
        }
        if(c==0){
            printf("%d",a[i]);
        }
    }
    printf("\n");
}