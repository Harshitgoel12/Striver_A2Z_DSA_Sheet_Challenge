// TC : O(N^2)
// SC : O(N)


class Solution {
  public:
 
 void Recursive_Insertion_Sort(vector<int>&arr,int i){
     if(i==arr.size())return;
     int j=i-1;
     int temp=arr[i];
     while(j>=0&&arr[j]>temp){
         arr[j+1]=arr[j];
         j--;
     }
     arr[j+1]=temp;
    
     Recursive_Insertion_Sort(arr,i+1);
 }
    void insertionSort(vector<int>& arr) {
        Recursive_Insertion_Sort(arr,1);
    }
};




//second approach -> using pure recursion
// TC :O(N^2)
// SC : O(N)

class Solution {
  public:
  void innerloop(vector<int>&arr,int i,int j,int temp){
      if(j<0||arr[j]<temp)return;
      swap(arr[j],arr[j+1]);
      innerloop(arr,i,j-1,temp);
      
  }
 void Recursive_Insertion_Sort(vector<int>&arr,int i){
     if(i==arr.size())return;
    innerloop(arr,i,i-1,arr[i]);
     Recursive_Insertion_Sort(arr,i+1);
 }
    void insertionSort(vector<int>& arr) {
        Recursive_Insertion_Sort(arr,1);
    }
};
