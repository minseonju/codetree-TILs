#include <iostream>
using namespace std;

int main() {
    int a=2;
    int b=5;

    int temp=a;
    a=b;
    b=temp;

    cout<<a<<endl;
    cout<<b;
    return 0;
}