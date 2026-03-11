#include <iostream>
using namespace std;

int main(){

    string s;
    cin >> s;

    for(int i=0;i<s.length();i++){

        bool repeat = false;

        for(int j=0;j<s.length();j++){

            if(i!=j && s[i]==s[j]){
                repeat = true;
                break;
            }

        }

        if(!repeat){
            cout << s[i];
            return 0;
        }

    }

}