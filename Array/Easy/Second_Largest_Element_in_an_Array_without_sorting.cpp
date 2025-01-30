// TC : O(N)
// SC : O(1)

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int slargest=-1;
        int largest=-1;
        for(int i=0;i<arr.size();i++){
            if(largest<arr[i]){
                slargest=largest;
                largest=arr[i];
            }
            if(largest>arr[i]&&slargest<arr[i]){
                slargest=arr[i];
            }
        }
        return slargest;
    }
};
