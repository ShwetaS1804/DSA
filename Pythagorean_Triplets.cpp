#include <iostream>
using namespace std;

int main(){
    int limit;
    cin>>limit;

    for(int a=1;a<=limit;a++){
        for(int b=1;b<=limit;b++){
            for(int c=1;c<=limit;c++){

                if(a*a + b*b == c*c){
                    cout<<a<<" "<<b<<" "<<c<<endl;
                }

            }
        }
    }
}