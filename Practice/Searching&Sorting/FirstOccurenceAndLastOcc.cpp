class Solution
{
    public:
    pair<long,long> indexes(vector<long long> arr, long long x)
    {
        pair<long long ,long long>ans(-1,-1);
        
        long long s=0;
        long long e=arr.size()-1;
        long long mid= s + (e-s)/2;
        //first occ 
        while(s <= e){
            
            if( arr[mid] == x ){
                ans.first = mid;
                //search in left
                e=mid-1;
            }
            
            else if(arr[mid] > x){
                e=mid-1;
            }
            
            
            else if(arr[mid] < x){
                s=mid+1;
            }
        
        mid= s + (e-s)/2;
        
        }
        
        s=0, e=arr.size()-1;
        mid= s + (e-s)/2;
        
        //last occ
        while(s <= e){
            
            if( arr[mid] == x ){
                ans.second = mid;
                s=mid+1;
            }
            
            else if(arr[mid] > x){
                e=mid-1;
            }
            
            
            else if(arr[mid] < x){
                s=mid+1;
            }
        
        mid= s + (e-s)/2;
        
        }
        
        return ans;
    }
};