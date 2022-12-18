int t=100001;
vector<bool>temp(t,1);
class Solution {
public:
    void Sieve(int n){
        for(auto i=2;i*i<=n;i++){
            if(temp[i]){
                for(auto j=i*i;j<=n;j+=i){
                    temp[j]=0;
                }
            }
        }
    }
    int prime(int val){
        int sum=0;
        for(auto i=2;i<=val;i++){
            if(temp[i]){
             while(val!=1&& val%i==0){
                 sum+=i;
                 val/=i;
             }
          }
        }
        return sum;
    }
    int smallestValue(int n) {
        if(n==4){
            return 4;
        }
        Sieve(n);
        int ans=INT_MAX;
        while(true){
            for(auto i=2;i<=n;i++){
                if(temp[i]){
                     if(n%i==0){
                         int first=i;
                         int second=n/i;
                         second= prime(second);
                         n=min(n,first+second);
                           if(temp[n]){
                                  return n;
                           }
                        }
                      }
                }
            }
            return 0;
      }  
};
