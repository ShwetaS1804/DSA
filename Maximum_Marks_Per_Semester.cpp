#include <iostream>
using namespace std;

int main(){

    int sem;
    cin>>sem;

    int subjects[sem];

    for(int i=0;i<sem;i++){
        cin>>subjects[i];
    }

    for(int i=0;i<sem;i++){

        int maxMark = -1;

        for(int j=0;j<subjects[i];j++){

            int mark;
            cin>>mark;

            if(mark<0 || mark>100){
                cout<<"You have entered invalid mark";
                return 0;
            }

            if(mark>maxMark)
                maxMark = mark;
        }

        cout<<"Maximum mark in "<<i+1<<" semester: "<<maxMark<<endl;
    }

}