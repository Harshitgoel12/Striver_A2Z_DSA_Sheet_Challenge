class Solution {
public:
int marge(vector<int>&nums,int i,int mid,int j){
    int st=i,ed=mid+1;
    int cnt=0;
    while(st<=mid&&ed<=j){
        if(nums[st]*1LL<=2*1LL*nums[ed]*1LL){
            st++;
        }
        else{
         cnt+=mid-st+1;
         ed++;
        }
    }
    cout<<cnt<<" ";
    st=i,ed=mid+1;
    vector<int>v;
    while(st<=mid&&ed<=j){
       if(nums[st]<nums[ed]){
        v.push_back(nums[st]);
        st++;
       }
       else{
        v.push_back(nums[ed]);
        ed++;
       }
    }
    while(st<=mid){
        v.push_back(nums[st]);
        st++;
    }
    while(ed<=j){
        v.push_back(nums[ed]);
        ed++;
    }
    for(int t=i;t<=j;t++){
        nums[t]=v[t-i];
    }
    return cnt;
}
int margesort(vector<int>&nums,int i,int j){
    if(i>=j)return 0;
    int mid=(i+j)/2;
    int val=0;
    val+=margesort(nums,i,mid);
    val+=margesort(nums,mid+1,j);
    val+=marge(nums,i,mid,j);
    return val;
}
    int reversePairs(vector<int>& nums) {
        int val= margesort(nums,0,nums.size()-1);
        return val;
    }
};
