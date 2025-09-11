class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> freq;
        for(int i=0;nums.size();i++){ 
        int current=nums[i];
        int remain=target-current;
        if(freq.find(remain)!=freq.end()){
           return {i,freq[remain]};
        }
        else{
            freq[current]=i;
        }
        }
        return {-1,-1};
    }
};