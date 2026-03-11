#include <iostream>
using namespace std;

int main() {

    string s;
    cin >> s;

    int count = 0;

    for(char c : s){
        if(c == '#')
            count++;
    }

    for(int i = 0; i < count; i++)
        cout << "#";

    for(char c : s){
        if(c != '#')
            cout << c;
    }

}