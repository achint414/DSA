//sort the strings and compare(first check if strings of diff len)
//O(n logn) O(1)

bool isAnagram(string a, string b){
        
        // Your code here
        if(a.size()!=b.size()){
            return false;
        }
    
        sort(a.begin(), a.end());         
        sort(b.begin(), b.end());   
    
        for(int i=0; i<a.size(); i++){
            
            if(a[i]!=b[i])
                return false;
                
        }
        
    return true;
}

//