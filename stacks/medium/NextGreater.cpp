 vector<long long> nextLargerElement(vector<long long> &arr, int n){
        vector<long long>ans(n,0);
        stack<long long>st;
        for(auto i=n-1;i>=0;i--){
             while(!st.empty()&& arr[st.top()]<arr[i]){
                 st.pop();
             }
             if(!st.empty()){
                 ans[i]=(arr[st.top()]);
             }else{
                 ans[i]=(-1);
             }
             st.push(i);
        }
 
        return ans;
    }
