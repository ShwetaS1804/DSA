#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<vector<int>> intervals={{1,3},{2,6},{8,10},{15,18}};

    sort(intervals.begin(),intervals.end());

    vector<vector<int>> res;

    res.push_back(intervals[0]);

    for(int i=1;i<intervals.size();i++){

        if(intervals[i][0] <= res.back()[1]){
            res.back()[1] = max(res.back()[1], intervals[i][1]);
        }
        else{
            res.push_back(intervals[i]);
        }
    }

    for(auto v:res){
        cout<<"["<<v[0]<<","<<v[1]<<"] ";
    }

}