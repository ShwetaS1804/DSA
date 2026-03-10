#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(matrix[i][j],matrix[i][n-j-1]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}