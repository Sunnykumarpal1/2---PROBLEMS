class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        vector<int>prefix(n,0),suffix(n,0);
        int prefixcnt=0,suffixcnt=0;
        for(auto i=0;i<n;i++){
            if(mp.find(nums[i])==mp.end()){
                prefixcnt++;
                mp[nums[i]]=1;
            } 
            prefix[i]=prefixcnt;
        }
        mp.clear();
        mp[nums[n-1]]=1;
        suffixcnt++;
        for(auto i=n-2;i>=0;i--){
            suffix[i]=suffixcnt;
             if(mp.find(nums[i])==mp.end()){
                 suffixcnt++;
                 mp[nums[i]]++;
             }
              
            
        }
       
        vector<int>ans(n,0);
        for(auto i=0;i<n;i++){
            ans[i]=prefix[i]-suffix[i];
        }
        return ans;
    }
};
