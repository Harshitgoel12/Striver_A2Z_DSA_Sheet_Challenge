class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++){
            int st=i+1,ed=nums.size()-1;
            while(st<ed){
                int sum=nums[st]+nums[ed]+nums[i];
                if(sum==0){
                    ans.push_back({nums[i],nums[st],nums[ed]});
                     while(st<ed&&ans[ans.size()-1][1]==nums[st]){
                        st++;
                     }
                     while(ed>st&&ans[ans.size()-1][2]==nums[ed]){
                      ed--;
                     }
                }
                else if(sum>0){
                    ed--;
                }
                else st++;

              
            }
             while(i+1<nums.size()&&nums[i+1]==nums[i])i++;
        }
        return ans;
    }
};
