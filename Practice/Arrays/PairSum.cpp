//brute
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v{0,1,2,3,4,5,6,7,9};
    vector<int>ans;
    int sum=9;

    for(int i=0; i<v.size(); i++){
        
        for(int j=i+1; j<v.size(); j++){
            if(v[i] + v[j] == sum)
                cout<<"{"<<v[i]<<","<<v[j]<<"}\n";
        }
    }
    
    return 0;
}

//triplet sum
//i=0 , j-i+1 , k=j+1