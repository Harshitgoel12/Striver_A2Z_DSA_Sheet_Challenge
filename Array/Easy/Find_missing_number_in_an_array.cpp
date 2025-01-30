// TC : O(N)
// SC: O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        n=n*(n+1)/2;
        return n-sum;

    }
};
