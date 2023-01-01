/*Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.

 

Example 1:

Input: pattern = "abba", s = "dog cat cat dog"
Output: true
Example 2:

Input: pattern = "abba", s = "dog cat cat fish"
Output: false
Example 3:

Input: pattern = "aaaa", s = "dog cat cat dog"
Output: false
 

Constraints:

1 <= pattern.length <= 300
pattern contains only lower-case English letters.
1 <= s.length <= 3000
s contains only lowercase English letters and spaces ' '.
s does not contain any leading or trailing spaces.
All the words in s are separated by a single space.
*/
 bool wordPattern(string pattern, string s) {
        s+=' ';
        vector<string>str;
        string st="";
        for(auto i:s){
            if(i==' '){
               str.push_back(st);
               st="";
            }else{
                st+=i;
            }
        }
        s.pop_back();
        int n=pattern.size();
        if(pattern.size()!=str.size()){
            return 0;
        }
        unordered_map<char,string>Char;
        unordered_map<string,char>word;
        for(auto i=0;i<n;i++){
            if(Char.find(pattern[i])!=Char.end()){
                if(Char[pattern[i]]!=str[i]){
                    return 0;
                }
            }else if(Char.find(pattern[i])==Char.end()){
                Char[pattern[i]]=str[i];
            }
        }
        for(auto i=0;i<n;i++){
            if(word.find(str[i])!=word.end()){
               if(word[str[i]]!=pattern[i]){
                   return 0;
               }
            }else if(word.find(str[i])==word.end()){
                word[str[i]]=pattern[i];
            }
        }
        return 1;
    }
