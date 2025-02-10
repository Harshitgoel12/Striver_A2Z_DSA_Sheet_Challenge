// TC : O(N)
// SC : O(1)

class Solution {
public:
    string largestOddNumber(string num) {
        int idx=-1;
        for(int i=0;i<num.size();i++){
            int val=num[i]-'0';
            if(val%2!=0)idx=i;
        }
        return num.substr(0,idx+1);
    }
};
