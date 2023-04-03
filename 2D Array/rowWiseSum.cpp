#include<bits/stdc++.h>
using namespace std;

void rowSum(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        } 
        cout<<"sum of "<<i+1<<" row: "<<sum<<endl;
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
rowSum(arr,3,3);

    return 0;
}
