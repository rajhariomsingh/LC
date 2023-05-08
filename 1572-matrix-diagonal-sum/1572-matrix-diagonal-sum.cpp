class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int mid=n/2;
        int sum=0;
        if(n==1){
            return mat[0][0];
        }
        for(int i=0;i<n;i++)
        {
            sum=sum+mat[i][i];
            sum+=mat[i][n-i-1];
            
            
        }
        
        cout<<sum;
        if(n%2!=0)
        {
            int k=mid;
            sum=sum-mat[k][k];
        }
       return sum;
    }
};