class Solution {
  public:
  
    void selectionSort(vector<int> &arr) {
        
        // TC : O(N^2)
        // SC : O(1)
        
        
        for(int i=0;i<arr.size();i++){
            int idx=i;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]<arr[idx]){
                    idx=j;
                }
            }
            swap(arr[i],arr[idx]);
        }
    }
};
