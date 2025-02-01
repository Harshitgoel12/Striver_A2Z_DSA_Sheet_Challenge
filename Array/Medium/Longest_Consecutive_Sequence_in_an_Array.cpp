// TC : O(N)
// SC : O(1)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i]-1)==st.end()){
                int cnt=0;
                int val=nums[i];
                while(st.find(val)!=st.end()){
                    cnt++;
                     st.erase(val);
                    val++;
                   
                }
                maxi=max(maxi,cnt);
            }
        }
        return maxi;
    }
};
