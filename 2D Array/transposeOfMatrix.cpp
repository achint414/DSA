#include<iostream>
#define N 3
using namespace std;

void transpose(int arr[][N]){
int temp=0;
for(int i=0;i<N;i++){
    for(int j=i;j<N;j++){
        temp=arr[i][j];
        arr[i][j]=arr[j][i];                      //or use swap() function 
        arr[j][i]=temp;
    }

}

}

int main(){

int arr[N][N];
for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        cin>>arr[i][j];
    }
}

transpose(arr);

for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        cout<<arr[i][j]<<" ";
    }
}
    return 0;
}