// TC : O(Nlog(N))
// SC : O(1)

class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if(high-low<1)return;
        int idx=partition(arr,low,high);
        quickSort(arr,low,idx-1);
        quickSort(arr,idx+1,high);
        
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
       int pivot=low;
       low++;
       while(low<=high){
           while(low<=high&&arr[low]<arr[pivot]){
               low++;
           }
           while(high>=low&&arr[high]>=arr[pivot])
           high--;
           if(low<high)swap(arr[low],arr[high]);
       }
      
       swap(arr[high],arr[pivot]);
       return high;
    }
};
