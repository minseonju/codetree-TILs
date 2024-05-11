#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cin >>a>>b;

    float sum=a+b;
    float average= sum/2;

    cout<<fixed;
    cout.precision(1);
 
    cout <<(int)sum<<" "<< (float)average;

    return 0;
}