#include <iostream>
using namespace std;

int main() {
    float n;
    cin>>n;

    float result=n*30.48;

    cout<<fixed;
    cout.precision(1);
    cout<<result;
    return 0;
}