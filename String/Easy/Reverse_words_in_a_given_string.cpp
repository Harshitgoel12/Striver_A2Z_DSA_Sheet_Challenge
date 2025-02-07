// TC : O(N)
// SC : O(N)


class Solution {
public:
    string reverseWords(string s) {
        stack<string>str;
        string st="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                st.push_back(s[i]);
            }
            else {
                if(st.empty())continue;
                str.push(st);
                st="";
            }
        }
        if(!st.empty())str.push(st);
        string ans="";
        while(!str.empty()){
           ans+=str.top();
           str.pop();
           ans.push_back(' ');
        }
        ans.pop_back();
        return ans;
    }
};
