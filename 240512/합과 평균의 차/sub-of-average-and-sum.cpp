#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;

    cin>>a>>b>>c;

    int sum=a+b+c;
    int average=sum/3;
    int result=sum-average;

    cout<<sum<<endl;
    cout<<average<<endl;
    cout<<result;
    return 0;
}