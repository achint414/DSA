//brute
//if have duplicates

#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    vector<int>v1{2,3,4,6,8,7,10};
    vector<int>v2{1,2,5,6,8,9,10};
    
    vector<int>ans;

     for(int i=0; i < v1.size(); i++){

            for(int j=0; j < v2.size(); j++){

                if(v1[i] == v2[j]){
                    v2[j]= INT_MIN;    //or =-1
                    break;
                }
            }
            
    }

    for(int i=0; i<v1.size();i++){
        ans.push_back(v1[i]);
    }

    for(int i=0; i<v2.size();i++){
        if(v2[i]!=INT_MIN) ans.push_back(v2[i]);
    }

    for(auto it:ans)cout<<it<<" ";

    return 0;
}