#include <iostream>
using namespace std;

int main(){

    string s;
    cin >> s;

    for(int i=0;i<s.length();i++){

        bool unique = true;

        for(int j=0;j<s.length();j++){

            if(i!=j && s[i]==s[j]){
                unique = false;
                break;
            }

        }

        if(unique){
            cout << i;
            return 0;
        }

    }

    cout << -1;
}