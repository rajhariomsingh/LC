class Solution {
public:
    int longestArithSeqLength(vector<int>& n)
    { 
        int out{1};
        for(int i{}; i<501/out; ++i)
            for(int d[1001]{}, D[1001]{}; const auto & n: n)
                out=max({out, d[n+500]=d[n-i+500]+1, D[n]=D[n+i]+1});
        return out;
    }
};