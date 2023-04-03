#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size ,int key){
int start=0;
int end=size-1;

                                   //when both start & end are large integers
int mid=start + (end-start)/2;     //(start+end)/2  sumup of start & end gives value out of int scope 
                                   
while(start<=end){

    if(arr[mid]==key){
        return mid;
    }
    // go to right part
    else if(key>arr[mid]){
        start=mid+1;
    }
    //go to last part
    else{
        end=mid-1;
    }

    mid=start + (end-start)/2;
}

    return -1;
}

int main(){
    int arr[6]={2,5,6,9,14,18};
    int index=binarySearch(arr,6,20);
    cout<<"index of 20 is: "<<index;
    return 0;
}