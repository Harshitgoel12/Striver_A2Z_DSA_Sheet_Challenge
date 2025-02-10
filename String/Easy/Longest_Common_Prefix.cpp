// TC : O(N^2)
// SC : O(1)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int mini=INT_MAX;
        for(int i=0;i<strs.size();i++){
            int v=strs[i].size();
            mini=min(mini,v);
        }
        for(int i=0;i<mini;i++){
            for(int j=1;j<strs.size();j++){
              if(strs[j][i]!=strs[j-1][i]){
                 return strs[0].substr(0,i);
              }
            }
        }
        return strs[0].substr(0,mini);
    }
};
