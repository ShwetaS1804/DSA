#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n==0){
        cout<<"No Factors";
        return 0;
    }

    n = abs(n);

    for(int i=1;i<=n;i++){

        if(n%i==0){

            cout<<i;

            if(i!=n)
                cout<<",";

        }

    }

}