class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> nums1;
        vector<int> nums2;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
             nums1.push_back(nums[i]);
            }
            else if(nums[i]<0){
             nums2.push_back(nums[i]);
            }
        }
        vector<int> ans(n);
        int posId=0;
        int negId=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
            ans[i]=nums1[posId];
            posId++;
           }
           else if(i%2!=0){
            ans[i]=nums2[negId];
            negId++;
           }  
        }
        return ans;
    }
};