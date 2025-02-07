// TC : O(N)
// SC : O(1)

class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt=1;
        string str="";
        for(int i=1;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
                str.push_back('(');
                }
            else if(cnt==1&&s[i]==')'){
                cnt=1;
                i++;
            }
            else {
                cnt--; 
                str.push_back(')');
                }
           
        }
        return str;
    }
};
