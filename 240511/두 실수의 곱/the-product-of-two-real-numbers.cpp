#include <iostream>
using namespace std;

int main() {
    float a=5.26;
    float b=8.27;

    float result=a*b;

    cout << fixed;
    cout.precision(3);

    cout<<result;
    return 0;
}