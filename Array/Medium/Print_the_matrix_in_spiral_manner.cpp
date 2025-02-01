class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
          // time complexity =O(N^2);
          //space complexity =O(N^2) for storing the value and return the array otherwise
          //                           space complexity is O(1)

        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>ans;
        int count=m*n;
        int rowStart=0,rowEnd=m-1,colStart=0,colEnd=n-1;
        int cnt=0;
        while(cnt<count){
            for(int i=colStart;i<=colEnd&&cnt<count;i++){
                ans.push_back(matrix[rowStart][i]);
                cnt++;
            }
            rowStart++;
            for(int i=rowStart;i<=rowEnd&&cnt<count;i++){
                ans.push_back(matrix[i][colEnd]);
                cnt++;
            }
            colEnd--;
            for(int i=colEnd;i>=colStart&&cnt<count;i--){
                ans.push_back(matrix[rowEnd][i]);
                cnt++;
            }
            rowEnd--;
            for(int i=rowEnd;i>=rowStart&&cnt<count;i--){
                ans.push_back(matrix[i][colStart]);
                cnt++;
            }
            colStart++;
        }
        return ans;
    }
};
