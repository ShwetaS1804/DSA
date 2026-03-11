#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<string> strs(n);

    for(int i=0;i<n;i++)
        cin >> strs[i];

    sort(strs.begin(), strs.end());

    string first = strs[0];
    string last = strs[n-1];

    string prefix = "";

    for(int i=0;i<first.length();i++){

        if(first[i] == last[i])
            prefix += first[i];
        else
            break;

    }

    cout << prefix;

}