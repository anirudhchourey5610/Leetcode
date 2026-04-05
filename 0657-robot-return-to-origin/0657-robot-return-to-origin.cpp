class Solution {
public:
    bool judgeCircle(string moves) {
        int countU=0;
        int countD=0;
        int countL=0;
        int countR=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U'){
                countU++;
            }
            else if(moves[i]=='D'){
                countD++;
            }
            else if(moves[i]=='L'){
                countL++;
            }
            else if(moves[i]=='R'){
                countR++;
            }
        }
        if(countU==countD && countL==countR){
            return true;
        }
        return false;
    }
};