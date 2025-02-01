// TC : O(N)
// SC : O(1)

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int i;
         for(i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                break;
            }
         }
         if(i==-1){
            reverse(nums.begin(),nums.end());
            return;
         }
         int j=i+1;
         int mini=INT_MAX,idx=-1;
         while(j<nums.size()){
            if(nums[j]>nums[i]&&nums[j]<mini){
                mini=nums[j];
                idx=j;
            }
            j++;
         }
         swap(nums[i],nums[idx]);
         sort(nums.begin()+i+1,nums.end());
    }
};
