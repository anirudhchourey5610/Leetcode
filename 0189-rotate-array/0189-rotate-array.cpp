class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0 || k==0) return ;
        k=k%n;
        std::rotate(nums.begin(),nums.begin()+(n-k),nums.end());
    }
};