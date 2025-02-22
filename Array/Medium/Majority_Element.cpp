// TC : O(N)
// SC : O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int num=nums[0];
       for(int i=1;i<nums.size();i++){
        if(num==nums[i]){
            count++;
        }
        else 
        count--;
        if(count==0){
            num=nums[i];
            count++;
        }
       }
       return num;

    }
};
