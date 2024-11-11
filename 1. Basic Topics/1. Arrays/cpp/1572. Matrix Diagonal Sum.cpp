class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int result = 0;
        int length = mat.size();
        for(int i = 0; i<length; i++){
            int j = i;

            result += mat[i][j];

            j = length-i-1;

            if(j!=i){
                result += mat[i][j];
            }
        }

        return result;
    }
};