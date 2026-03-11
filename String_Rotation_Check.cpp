#include <iostream>
using namespace std;

int main(){

    string s, goal;
    cin >> s >> goal;

    string temp = s + s;

    if(temp.find(goal) != string::npos)
        cout << "true";
    else
        cout << "false";

}