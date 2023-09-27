#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool isPossible(vector<int>ranks, int P, int mid){

    int currP = 0; //initial prata count
    for(int i=0; i<ranks.size(); i++){

        int R = ranks[i], j=1; 
        int timeTaken = 0;

        while(true){

            if(timeTaken + j * R <= mid){
                
                currP++;
                timeTaken += j * R;
                j++;
            }
            
            else break;

            if(currP >= P)return true;
        }
    }
    return false;
}

int minTime(vector<int>ranks, int P){
    
    int s = 0;
    int highestRank = *max_element(ranks.begin(), ranks.end());
    int e = highestRank * (P* (P + 1) / 2);
    int ans = -1;

    while(s <= e){

        int mid = s + (e-s)/2;
        if(isPossible(ranks, P, mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main()
{
    int t; cin>>t;
    while(t--){
        int P, C;
        cin>>P>>C;
        vector<int>cooksRanks;
        while(C--){
            int R; cin>>R;
            cooksRanks.push_back(R);
        }

        cout<<minTime(cooksRanks, P)<<endl;
    }
    return 0;
}


// Input:
// 3
// 10
// 4 1 2 3 4
// 8
// 1 1
// 8
// 8 1 1 1 1 1 1 1 1

// Output:
// 12
// 36
// 1