//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:


    string stringMirror(string str){
        // Code here
       string temp="";
       temp+=str[0];
       for(int i=1;i<str.size();i++){
           if(i!=1&&temp[i-1]==str[i]){
               temp+=str[i];
           }
           else if(temp[i-1]>str[i]){
               temp+=str[i];
           }
           else{
               break;
           }
       }
       string temp1=temp;
       reverse(temp.begin(),temp.end());
       temp1+=temp;
       return temp1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends