class FrequencyTracker {
public:
      unordered_map<int,int>mp;
      int freq[100001]={0};
    FrequencyTracker() {
    
    }
    
    void add(int number) {
         int val=0;
        if(mp.find(number)!=mp.end()){
            val=mp[number];
            freq[val]--;
        }
        mp[number]++;
        freq[mp[number]]++;
        
    }
    
    void deleteOne(int number) {
        if(mp.find(number)!=mp.end()){
            int occur=mp[number];
            freq[occur]--;
            occur--;
            if(occur!=0){
                freq[occur]++;
                mp[number]--;
            }else{
                mp.erase(number);
            }
        }
    }
    
    bool hasFrequency(int frequency) {
        if(freq[frequency]){
          return 1;
         }
        return 0;
    }
};
