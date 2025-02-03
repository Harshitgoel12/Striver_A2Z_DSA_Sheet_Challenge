class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int left=1,right=1;
        int st=0,ed=nums.size()-1;
        int maxi=INT_MIN;
        while(st<nums.size()){
            left*=nums[st];
            right*=nums[ed];
            st++;
            ed--;
            maxi=max({maxi,left,right});
            if(left==0)left=1;
            if(right==0)right=1;

        }
        return maxi;
    }
};
