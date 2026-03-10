#include <iostream>
#include <set>
using namespace std;

int main(){

    int n,m;

    cin>>n;

    int arr1[n];

    for(int i=0;i<n;i++)
        cin>>arr1[i];

    cin>>m;

    int arr2[m];

    for(int i=0;i<m;i++)
        cin>>arr2[i];

    set<int> s1(arr1,arr1+n);
    set<int> result;

    for(int i=0;i<m;i++){

        if(s1.count(arr2[i]))
            result.insert(arr2[i]);

    }

    for(int x:result)
        cout<<x<<" ";

}