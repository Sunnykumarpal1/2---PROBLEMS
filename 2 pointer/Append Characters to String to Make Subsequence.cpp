tc->O(n)
sc->O(n)
int appendCharacters(string s, string t) {
        int cnt=0;
        int i=0,j=0;
        int m=s.size();
        int n=t.size();
        while(i<m&& j<n){
            if(s[i]==t[j]){
                i++;
                j++;
            }else{
               i++; 
            }
        }
         return n-j;
    }
