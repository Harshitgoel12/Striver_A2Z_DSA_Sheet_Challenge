// TC : O(N)
// SC : O(1)

class Solution {
  public:
    int largest(vector<int> &arr) {
        // return *max_element(arr.begin(),arr.end());
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(maxi<arr[i]){
                maxi=arr[i];
            }
        }
        return maxi;
    }
};
