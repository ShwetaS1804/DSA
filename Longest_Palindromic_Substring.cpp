#include <iostream>
using namespace std;

int main(){

    string s;
    cin >> s;

    int start = 0, maxLength = 1;

    for(int i=0;i<s.length();i++){

        for(int j=i;j<s.length();j++){

            bool palindrome = true;

            for(int k=0;k<(j-i+1)/2;k++){

                if(s[i+k] != s[j-k]){
                    palindrome = false;
                    break;
                }

            }

            if(palindrome && (j-i+1) > maxLength){
                start = i;
                maxLength = j-i+1;
            }

        }

    }

    cout << s.substr(start, maxLength);

}