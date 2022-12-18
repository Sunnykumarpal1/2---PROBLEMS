 int similarPairs(vector<string>& words) {
       
        int cnt=0;
       for(auto i=0;i<words.size();i++){
           unordered_map<char,int>mp;
           bool flag=1;
            for(auto j=0;j<words[i].size();j++){
                mp[words[i][j]]++;
            }
           for(auto k=i+1;k<words.size();k++){
              bool flag=1;
               unordered_map<char,int>mp2;
               for(auto m=0;m<words[k].size();m++){
                  if(mp.find(words[k][m])==mp.end()){
                      flag=0;
                      break;
                  }else{
                      mp2[words[k][m]]++;
                  }
                   
               }
               if(mp.size()==mp2.size()&&flag==1){
                   cnt++;
               }
           }
       }
        return cnt;
         
    }
