#include<iostream>
using namespace std;

int main(){
    int arr[2][3] = {1,2,3,4,2,3};
    int arr2[3][4] = {2,4,3,1,2,4,1,2,1,0,1,2};
    int arrProd[2][4] = {0};
    int c = 3;
    for (int i = 0; i<2; i++){
        for(int k = 0; k<4; k++){
            for(int j = 0; j<c; j++){
                arrProd[i][k] += arr[i][j] * arr2[k][j];
            }
        }
    }

    //print arrProd
    for (int i =0; i<2; i++){
        for (int j =0; j<4; j++){
            cout<<arrProd[i][j]<<" ";
        }
        cout<<endl;
    }





    return 0;
}