#include <iostream>
using namespace std;

void change(int *ptr){
    *ptr = 20;
}

int main()
{
    int a = 10;
    change(&a);
    cout<<"is a changed: "<<a;

    return 0;
}
