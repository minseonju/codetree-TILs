#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;

    int s = n*n;

    if(n<5){
        cout << s << endl;
        cout << "tiny";
    }
    else{
        cout<< s;
    }
    return 0;
}