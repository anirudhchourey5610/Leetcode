class Solution {
public:
    bool isGood(vector<int>& nums) {
        int max=nums[0];
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
            }
        }
        if(n!=max+1){
            return false;
        }
        vector<int> freq(max+1,0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max || nums[i]<1) {
                return false;
            }
            freq[nums[i]]++;
        }
        for(int i=1;i<max;i++) {
            if(freq[i]!=1) {
                return false;
            }
        }
        if(freq[max]!=2) {
            return false;
        }
        return true;
    }
};