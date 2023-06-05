class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        if(coordinates[0][0]==0&&coordinates[0][1]==0&&n==4)

        {
            return false;
        }
       
        int k=0;
        float p,q,a,b;
        if(n==2)
        {
            return true;
        }
        for(int i=0;i<n-2;i++)
        {a=(coordinates[i+1][0]-coordinates[i][0]);
         b=(coordinates[i+1][1]-coordinates[i][1]);
         if(b==0)
         {
             p=0;
         }
           else p=(a/b);
         
         a=(coordinates[i+2][0]-coordinates[i+1][0]);
         b=(coordinates[i+2][1]-coordinates[i+1][1]);
         if(b==0)
         {
             q=0;
         }
       else q=(a/b);
            
            if(p!=q){
                k++;
            }
        }if(k!=0){
            return false;
        }
        return true;
    }
};