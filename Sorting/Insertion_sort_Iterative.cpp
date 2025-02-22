//TC : O(N^2)
// SC : O(1)

class Solution {
  public:
   
    void insertionSort(vector<int>& arr) {
        for(int i=1;i<arr.size();i++){
            int j=i-1;
            int temp=arr[i];
            while(j>=0&&arr[j]>=temp){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
        }
    }
};
