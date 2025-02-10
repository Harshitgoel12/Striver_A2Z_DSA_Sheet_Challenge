// TC : O(N)
// SC : O(255)

class Solution {
public:
    bool isIsomorphic(string s, string t) {
         if(s.size()!=t.size())return false;
        vector<char>freq1(255),freq2(255);
       for(int i=0;i<s.size();i++){
        if(!freq1[s[i]]&&!freq2[t[i]]){
           freq2[t[i]]=s[i];
           freq1[s[i]]=t[i];
        }
        else if(freq1[s[i]]!=t[i]&&freq2[t[i]]!=s[i]){
             return false;
        }
       }
       return true;
    }
};
