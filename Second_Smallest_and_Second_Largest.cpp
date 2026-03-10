#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    if(n<2){
        cout<<"Second Smallest : -1\nSecond Largest : -1";
        return 0;
    }

    sort(arr,arr+n);

    int small=-1,large=-1;

    for(int i=1;i<n;i++){
        if(arr[i]!=arr[0]){
            small=arr[i];
            break;
        }
    }

    for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[n-1]){
            large=arr[i];
            break;
        }
    }

    cout<<"Second Smallest : "<<small<<endl;
    cout<<"Second Largest : "<<large;
}