#include <iostream>
using namespace std;

int main() {

    int month;
    cin >> month;

    if(month < 1 || month > 12){
        cout << "Invalid Month Entered";
    }
    else if(month >= 3 && month <= 5){
        cout << "Season: Spring";
    }
    else if(month >= 6 && month <= 8){
        cout << "Season: Summer";
    }
    else if(month >= 9 && month <= 11){
        cout << "Season: Autumn";
    }
    else{
        cout << "Season: Winter";
    }

}