#include <iostream>
#include <sstream>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();

    string name,minItem;
    int price,discount;

    int minDiscount = 100000;

    for(int i=0;i<n;i++){

        string line;
        getline(cin,line);

        stringstream ss(line);

        getline(ss,name,',');

        ss>>price;
        ss.ignore();

        ss>>discount;

        int discAmount = (price*discount)/100;

        if(discAmount < minDiscount){
            minDiscount = discAmount;
            minItem = name;
        }
    }

    cout<<minItem;
}