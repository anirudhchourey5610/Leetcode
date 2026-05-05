class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n=word1.size();
        int m=word2.size();
        int i=0,j=0;
        int k=0;
        while(i<n && j<m){
            if(k%2==0){
                ans.push_back(word1[i]);
                i++;
            }
            else{
                ans.push_back(word2[j]);
                j++;
            }
            k++;
        }
        while(i<n){
            ans.push_back(word1[i]);
            i++;
        }
        while(j<m){
            ans.push_back(word2[j]);
            j++;
        }
        return ans;
    }
};