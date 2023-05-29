//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int is(string t,string pattern){
        string checker="";
        int n=t.size();
        for(int i=0;i<n;i++){
            if(int(t[i]) < 97){
                checker.push_back(t[i]);
            }
        }
        if(pattern.size()>checker.size()){return 0;}
        int st=0;int en=pattern.size()-1;
        while(en < checker.size()){
            int t1=st;
            string t="";
            while(t1<=en){
                t+=checker[t1];
                t1++;
            }
            en=t1+pattern.size()-1;
            if(t==pattern){return 1;}
        }
        return 0;
    }
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern){
        // code here
        vector<string>ans;
        for(int i=0;i<N;i++){
            if(is(Dictionary[i],Pattern)){
                ans.push_back(Dictionary[i]);
            }
        }
        if(ans.size()==0){
            return {"-1"};
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends