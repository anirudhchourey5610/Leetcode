class Solution {
public:
    char findTheDifference(string s, string t) {
        int tSum=0;
        int sSum=0;
        for(int i=0;i<t.size();i++){
            int asc=static_cast<int>(t[i]);
            tSum=tSum+asc;
        }
        for(int i=0;i<t.size();i++){
            int desc=static_cast<int>(s[i]);
            sSum=sSum+desc;
        }
        int diff=tSum-sSum;
        char ans=static_cast<char>(diff);
        return ans;
    }
};