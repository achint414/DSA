#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][3],int row,int col,int find){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==find)return true;
        }
    }
    return false;
}

int main(){
    
int arr[2][3];
for (int i=0;i<2;i++)
{
    for (int j=0;j<3;j++)
    {
        cin>>arr[i][j];
    }
    
}

cout<<"enter value to find: ";
int x; cin>>x;

if(isPresent(arr,2,3,x)){
    cout<<"element found";
}
else{
    cout<<"element not found";
}

    return 0;
}
