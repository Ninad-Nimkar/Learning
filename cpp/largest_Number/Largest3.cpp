#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && c){
        cout << "a is the largest";
    }
    else if (b > c && a){
        cout << "B is the largest";
    }
    else{
        cout << "c is the largest";
    }
}