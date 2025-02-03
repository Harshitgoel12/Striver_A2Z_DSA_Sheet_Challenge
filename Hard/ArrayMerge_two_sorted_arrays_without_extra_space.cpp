// TC : O(N)


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1;
        int d=0;
        while(i>=0&&j>=0){
            if(nums1[i]>nums2[j]){
                nums1[nums1.size()-1-d]=nums1[i];
                i--;
                d++;
            }
            else{
                nums1[nums1.size()-d-1]=nums2[j];
                j--;
                d++;
            }
        }
        while(i>=0){
            nums1[nums1.size()-1-d]=nums1[i];
            i--;
            d++;
        }
         while(j>=0){
            nums1[nums1.size()-1-d]=nums2[j];
            j--;
            d++;
        }
    }
};
