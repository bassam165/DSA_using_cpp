#include <iostream>
using namespace std;

void change(int &b){ //here b is alias
    b = 20;
}

int main()
{
    int a = 10;
    change(a);
    cout<<"is a changed: "<<a;

    return 0;
}
