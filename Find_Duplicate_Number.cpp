#include <iostream>
#include <set>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    set<int> s;

    for(int i=0;i<n;i++){

        if(s.count(arr[i])){
            cout<<arr[i];
            break;
        }

        s.insert(arr[i]);
    }

}