class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum1=0,sum2=0,sum;
        int a=mat.size();
        for (int i =0;i<mat.size();i++){
            sum1=sum1+mat[i][i];
            sum2=sum2+mat[i][a-i-1];
        }
        sum=sum1+sum2;

        if (a % 2 == 1) {
            sum = sum - mat[a/2][a/2];
        }
        return sum;
    }
};