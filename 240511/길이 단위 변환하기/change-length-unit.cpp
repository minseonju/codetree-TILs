#include <iostream>
using namespace std;

int main() {
    float a=9.2;
    float b=1.3;

    float result_a=9.2*30.48;
    float result_b=1.3*160934;

    cout<<fixed;
    cout.precision(1);
    cout<<a<<"ft"<<" = "<<result_a<<"cm"<<endl;
    cout<<b<<"mi"<<" = "<<result_b<<"cm";
    return 0;
}