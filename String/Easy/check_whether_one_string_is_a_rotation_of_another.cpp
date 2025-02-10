// TC : O(N*M)

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        s=s+s;
        for(int i=0;i<=s.size()-goal.size();i++){
            string st=s.substr(i,goal.size());
            if(st==goal)return true;
        }
        return false;
    }
};
