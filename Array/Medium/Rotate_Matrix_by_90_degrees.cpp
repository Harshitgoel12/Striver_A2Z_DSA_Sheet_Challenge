// TC : O(N^2)
// SC : O(1)


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //rotate array
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[i].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        int i=0,j=matrix.size()-1;
        while(i<j){
            for(int k=0;k<matrix.size();k++){
                swap(matrix[k][i],matrix[k][j]);
            }
            i++;
            j--;
        }

    }
};
