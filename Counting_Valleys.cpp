#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    string path;
    cin >> path;

    int level = 0;
    int valleys = 0;

    for(char step : path){

        if(step == 'U')
            level++;
        else
            level--;

        if(level == 0 && step == 'U')
            valleys++;
    }

    cout << valleys;
}