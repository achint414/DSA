//brute
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    vector<int>v{0,1,1,1,0,1,0,1,0,1};

    int start=0;
    int end=v.size()-1;
    int i=0;

    while(i <= end){
        
        if(v[i]==0){
            swap(v[i],v[start]);
            start++;
            i++;
        }

        else if(v[i]==1){
            swap(v[i],v[end]);
            end--;
        //we have to check if after swap 1 didnt come at i - no i++
        }

    }

    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}