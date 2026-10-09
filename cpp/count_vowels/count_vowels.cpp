#include <iostream>
using namespace std;

int vowelcount(string str){
    int count = 0;
    for(int i=0; i < str.length(); i++){
        str[i] = tolower(str[i]);
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            count++;
    }
    return count;
}

int main(){
    string str;
    cout << "enter a word" << endl;
    cin >> str;
    cout << vowelcount(str);
}