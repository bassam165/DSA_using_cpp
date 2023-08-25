#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> v){

    int s=0, e=v.size()-1;
    while (s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
    
}
int main()
{
    vector<int> v{2,5,3,8};
    reverse(v);
}