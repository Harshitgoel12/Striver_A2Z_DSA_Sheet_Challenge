// TC : O(N)

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
       long long int sum=accumulate(arr.begin(),arr.end(),0LL);
       long long int rep=-1;
       for(int i=0;i<arr.size();i++){
           if(arr[abs(arr[i])-1]>0){
               arr[abs(arr[i])-1]*=-1;
           }
           else if(arr[abs(arr[i])-1]<0){
                rep=abs(arr[i]);
               
               break;
           }
       }
       long long int temp=(arr.size()*1LL)*(arr.size()+1)/2;
       int missing=temp+rep-sum;
       return {rep,missing};
    }
};
