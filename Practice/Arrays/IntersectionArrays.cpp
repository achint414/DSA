//brute
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums1{1,2,3,2,1};
    vector<int>nums2{3,4,6,2,1,3};
    
    vector<int>ans;

        for(int i=0; i < nums1.size(); i++){

            for(int j=0; j < nums2.size(); j++){

                if(nums1[i] == nums2[j]){
                    ans.push_back(nums2[j]);
                    nums2[j]= INT_MIN;    //or =-1
                    break;
                }
            }
        }

    for(auto it:ans)cout<<it<<" ";

    return 0;
}