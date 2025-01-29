//TC : O(NLog(N))
//SC : O(N)


class Solution {
  public:
  void marge(vector<int>&arr,int l,int mid,int r){
      int st=l;
      int ed=mid+1;
      vector<int>temp;
      while(st<=mid&&ed<=r){
          if(arr[st]>=arr[ed]){
              temp.push_back(arr[ed]);
              ed++;
          }
          else{
              temp.push_back(arr[st]);
              st++;
          }
      }
      while(st<=mid){
          temp.push_back(arr[st]);
          st++;
      }
       while(ed<=r){
          temp.push_back(arr[ed]);
          ed++;
      }
      for(int i=l;i<=r;i++){
          arr[i]=temp[i-l];
      }
  }
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l>=r)return;
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        marge(arr,l,mid,r);
    }
};
