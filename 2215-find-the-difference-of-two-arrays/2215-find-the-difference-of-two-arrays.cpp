class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        set<int>n1(nums1.begin(),nums1.end());
        set<int>n2(nums2.begin(),nums2.end());

        vector<int>ans2;
        vector<int>ans1;
        vector<vector<int>>a;

        for(auto i:n1){
            bool flag = true;
            for(auto j: n2){
                if(i == j && flag == 1){
                    flag = false;
                    break;
                }
            }
            if(flag == 1){
                ans1.push_back(i);
            }
        }

        a.push_back(ans1);


        

        for(auto j:n2){
            bool flag = true;
            for(auto i: n1){
                if(j == i && flag == 1){
                    flag = false;
                    break;
                }
            }
            if(flag == 1){
                ans2.push_back(j);
            }
        }

        a.push_back(ans2);

        return a;

        
    }
};