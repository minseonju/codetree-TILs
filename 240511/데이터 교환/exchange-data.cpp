#include <iostream>
using namespace std;

int main() {
    int a=5;
    int b=6;
    int c=7;

    
    int temp_1=a;

    a=c;
    c=b;
    b=temp_1;

    cout<<a<<endl<<b<<endl<<c;


    
    return 0;
}