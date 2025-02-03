// TC : O(Nlog(N))

class Solution {
  public:
    // Function to count inversions in the array.
    int marge(vector<int>&arr,int st,int mid,int ed){
        int i=st;
        int j=mid+1;
        vector<int>v;
        int cnt=0;
        while(i<=mid&&j<=ed){
            if(arr[i]>arr[j]){
                cnt+=(mid-i+1);
                v.push_back(arr[j]);
                j++;
            }
            else{
                v.push_back(arr[i]);
                i++;
            }
        }
        while(i<=mid){
            v.push_back(arr[i]);
            i++;
        }
        while(j<=ed){
            v.push_back(arr[j]);
            j++;
        }
        for(int i=st;i<=ed;i++){
            arr[i]=v[i-st];
        }
        return cnt;
    }
    int margesort(vector<int>&arr,int st,int ed){
        if(st>=ed)return 0;
        int mid=(st+ed)/2;
        int val=0;
        val+=margesort(arr,st,mid);
        val+=margesort(arr,mid+1,ed);
        val+=marge(arr,st,mid,ed);
        return val;
    }
    int inversionCount(vector<int> &arr) {
        return margesort(arr,0,arr.size()-1);
    }
};
