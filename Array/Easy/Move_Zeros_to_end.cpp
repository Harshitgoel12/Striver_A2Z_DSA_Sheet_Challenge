// TC : O(N)
// SC : O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
        int idx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[idx++]=nums[i];
            }
            else cnt++;
        }
        while(cnt>0){
            nums[idx++]=0;
            cnt--;
        }
    }
};
