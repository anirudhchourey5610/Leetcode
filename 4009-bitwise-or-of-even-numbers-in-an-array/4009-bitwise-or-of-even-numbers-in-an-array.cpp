class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int result=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
             ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<ans.size();i=i+1){
            result|=ans[i];
        }
        return result;
    }
};