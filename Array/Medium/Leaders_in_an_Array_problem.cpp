// TC : O(N)
// SC : O(1)

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
int maxi=INT_MIN;
vector<int>ans;
for(int i=arr.size()-1;i>=0;i--){
    if(maxi<=arr[i]){
        maxi=arr[i];
        ans.push_back(arr[i]);
    }
}
reverse(ans.begin(),ans.end());
return ans;
    }
};
