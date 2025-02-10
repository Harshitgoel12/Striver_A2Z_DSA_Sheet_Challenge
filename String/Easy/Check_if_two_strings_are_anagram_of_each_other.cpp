// TC : O(N)
// SC : O(26)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int>v(26,0);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
        }
        for(int j=0;j<t.size();j++){
            v[t[j]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(v[i]!=0)return false;
        }
        return true;
    }
};
