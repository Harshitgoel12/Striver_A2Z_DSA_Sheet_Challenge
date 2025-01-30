// Approach 1
// TC : O(N^2)
// SC : O(1)

class Solution {
public:
    bool check(vector<int>& nums) {
      for(int i=0;i<nums.size();i++){
        if(is_sorted(nums.begin(),nums.end()))return true;
        int val=nums[0];
        for(int j=1;j<nums.size();j++){
            nums[j-1]=nums[j];
        }
        nums[nums.size()-1]=val;
      }  
return false;
    }
};


//Approach 2
// TC : O(N)
// SC : O(1)

class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0;
      for(int i=1;i<nums.size();i++){
        if(nums[i]<nums[i-1])cnt++;
      }
      if(nums[nums.size()-1]>nums[0])cnt++;
      return cnt<=1;
    }
};
