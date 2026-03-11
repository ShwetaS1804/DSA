#include <iostream>
using namespace std;

int main() {

    int r, c;
    cin >> r >> c;

    int A[100][100], B[100][100];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> A[i][j];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> B[i][j];

    bool identical = true;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(A[i][j] != B[i][j]){
                identical = false;
                break;
            }
        }
    }

    if(identical)
        cout << "Matrices are identical";
    else
        cout << "Matrices are not identical";

}