class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> ans;
        int n = nums.size();
        for(auto num : nums){
            ans[num]++;
        }
        for(auto i : ans){
            if(i.second == 1){
                return i.first;
            }
        }
        return -1;
    }
};