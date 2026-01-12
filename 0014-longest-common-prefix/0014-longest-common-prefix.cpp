class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string minStr=strs[0];
        for(int i=1;i<strs.size();i++){
            if(minStr.length()>strs[i].length()){
                minStr=strs[i];
            }
        }
        string prefix=minStr;
        while(!prefix.empty()){
            bool isValid = true;
        for(int i=0;i<strs.size();i++){
            for(int j=0;j<prefix.length();j++){
                if(prefix[j]!=strs[i][j]){
                    isValid=false;
                    break;
                }
            }
            if(!isValid) break;
        }
        if(isValid) {return prefix;}
        prefix.pop_back();
        }
        return "";
    }
};