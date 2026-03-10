#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

    int n,target;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cin>>target;

    unordered_map<int,int> freq;

    int count=0;

    for(int i=0;i<n;i++){

        int complement = target - arr[i];

        if(freq[complement] > 0)
            count += freq[complement];

        freq[arr[i]]++;
    }

    cout<<count;

}