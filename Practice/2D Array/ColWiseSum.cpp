#include<bits/stdc++.h>
using namespace std;

void colSum(int arr[][3],int rows, int cols){
    int j=0;
    for(int i=0; i<rows; i++){
        int sum=0;
        for(j=0; j<cols; j++){
            sum+=arr[j][i];
        }
        cout<<"sum of "<<(i+1)<<" col: "<<sum<<endl;
    }
}

int main(){

    int arr[3][3];
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    colSum(arr,3,3);

    return 0;
}
