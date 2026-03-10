#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){

        int cars,bikes;

        cin>>cars>>bikes;

        int tyres = (cars*4) + (bikes*2);

        cout<<tyres<<endl;
    }

}