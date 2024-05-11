#include <iostream>
using namespace std;

int main() {
    int a=13;
    float gravity_moon_rate = 0.165;
    

    cout<<fixed;
    cout.precision(6);

    float gravity_moon = a*gravity_moon_rate;

    cout <<a<< " * "<<gravity_moon_rate<< " = " << gravity_moon;
    return 0;
}