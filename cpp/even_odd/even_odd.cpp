//Program for even and odd number
#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "type a Number" << endl;
    cin >> x;
    if(x % 2 == 0){
        cout << "Even number";
    }
    else{
        cout << "Odd Number";
    }
}