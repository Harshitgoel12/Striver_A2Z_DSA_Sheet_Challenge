// TC : O(Nlog(N))
// SC : O(N)

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>>v;
        for(auto it:mp){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater<>());
        string ans="";
        for(auto it: v){
            int temp=it.first;
            while(temp>0){
                ans.push_back(it.second);
                temp--;
            }
        }
        return ans;
    }
};
