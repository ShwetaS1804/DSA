#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int target = 4;

    int low=0,high=n-1;

    while(low<=high){

        int mid=(low+high)/2;

        if(arr[mid]==target){
            cout<<mid;
            return 0;
        }

        if(arr[mid]<target)
            low=mid+1;
        else
            high=mid-1;
    }

    cout<<"Not Found";
}