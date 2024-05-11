#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cin>>a>>b;

    float sum=a+b;
    float minus=a-b;

    float result=sum/minus;

    cout<<fixed;
    cout.precision(2);
    cout<<result;



    return 0;
}