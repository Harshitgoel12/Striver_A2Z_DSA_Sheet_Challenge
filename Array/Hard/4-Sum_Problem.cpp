class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i,j;
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>str;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                 int st=j+1,ed=nums.size()-1;
                 while(st<ed){
                    long long int sum=nums[st]*1LL+nums[ed]+nums[i]+nums[j];
                    if(sum==target){
                        vector<int>v = {nums[st] , nums[ed] , nums[i] , nums[j]};
                       str.insert(v);
                      st++;

                    }
                    else if(sum>target)ed--;
                    else st++;
                 }
            }
        }
        if(str.empty())return ans;
        for(auto it:str){
            ans.push_back(it);
        }
        return ans;
    }
};
