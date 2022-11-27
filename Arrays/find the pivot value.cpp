// BRUTEFORCE SOLUTION o(N^2)
int pivotInteger(int n) {
        int sum1=0;
        for(auto i=1;i<=n;i++){
           int sum2=0;
              sum1+=i; 
              for(auto j=i;j<=n;j++){
                  sum2+=j;
              }
            if(sum1==sum2){
                return i;
            }
        }
        return -1;
    }
OPTIMAL APPROACH BY USING PRFIX SUM
