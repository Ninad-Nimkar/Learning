#include <iostream>
using namespace std;

int main(){
    int avg;
    int sum=0;
    int a[5] = {1, 2, 3, 4, 5};
    for(int i=0; i < 5; i++){
        sum += a[i]; 
    }
    cout << sum << endl;
    
    avg = sum/5;
    cout << avg;
}