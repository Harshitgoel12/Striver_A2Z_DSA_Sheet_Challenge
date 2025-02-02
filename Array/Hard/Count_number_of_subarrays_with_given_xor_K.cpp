int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int>mp;
    int sum=0;
    int ans=0;
    mp[0]=1;
    for(int i=0;i<A.size();i++){
        sum^=A[i];
        if(mp.find(B^sum)!=mp.end()){
            ans+=mp[B^sum];
        }
        mp[sum]++;
        
    }
    return ans;
}
