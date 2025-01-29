//TC : O(N^2)
//SC : O(N)


class Solution {
  public:
  
    void Recursive_Bubble_Sort(vector<int>&arr,int idx){
        if(idx==arr.size())return;
        for(int j=0;j<arr.size()-idx-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
        Recursive_Bubble_Sort(arr,idx+1);
        
    }
    void bubbleSort(vector<int>& arr) {
        Recursive_Bubble_Sort(arr,0);
    }
};


//second approach -> using pure recursion
//TC :O(N^2)
//SC : O(N)


class Solution {
  public:
  void innerloop(vector<int>&arr,int idx,int j){
        if(j>=arr.size()-idx-1)return;
        if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        innerloop(arr,idx,j+1);
        
    }
    void Recursive_Bubble_Sort(vector<int>&arr,int idx){
        if(idx==arr.size())return;
        
        innerloop(arr,idx,0);
        Recursive_Bubble_Sort(arr,idx+1);
        
    }
    void bubbleSort(vector<int>& arr) {
        Recursive_Bubble_Sort(arr,0);
    }
};
