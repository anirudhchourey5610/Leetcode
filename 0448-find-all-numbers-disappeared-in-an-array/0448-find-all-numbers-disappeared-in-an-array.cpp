class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> freq;
       for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(freq[i]==0){
            ans.push_back(i);
            }
        }
        return ans;
    }
};