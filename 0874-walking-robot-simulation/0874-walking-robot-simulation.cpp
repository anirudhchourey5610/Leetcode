class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<long long> ob;
        for(auto obs:obstacles){
            long long key=(long long)obs[0]*60001+obs[1];
            ob.insert(key);
        }
        vector<pair<int,int>> dire={
            {0,1},{1,0},{0,-1},{-1,0}
        };
        int x=0,y=0;
        int d=0;
        int maxDist=0;
        for(int comm:commands){
            if(comm==-1){
                d=(d+1)%4;
            }
            else if(comm==-2){
                d=(d+3)%4;
            }
            else{
                for(int i=0;i<comm;i++){
                    int bx=x+dire[d].first;
                    int by=y+dire[d].second;
                    long long key=(long long)bx*60001+by;
                    if(ob.count(key)) break;
                    x=bx;
                    y=by;
                    maxDist=max(maxDist,x*x+y*y);
                }
            }
        }
        return maxDist;
    }
};