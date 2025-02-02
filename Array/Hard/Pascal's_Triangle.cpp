class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       if(numRows==1)return {{1}};
       vector<vector<int>>ans;
       ans.push_back({1});
       for(int i=1;i<numRows;i++){
        vector<int>v;
        v.push_back(1);
        for(int i=1;i<ans.back().size();i++){
               v.push_back(ans[ans.size()-1][i-1]+ans[ans.size()-1][i]);
        }
        v.push_back(1);
        ans.push_back(v);
       } 
       return ans;
    }
};
