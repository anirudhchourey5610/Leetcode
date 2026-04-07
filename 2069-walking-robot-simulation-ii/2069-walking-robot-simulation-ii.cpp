class Robot {
public:
   int x=0,y=0;
   int d=0;
   int width,height;
   vector<pair<int,int>>dirs={
        {1,0},{0,1},{-1,0},{0,-1}
    };
    Robot(int width, int height) {
        this->width=width;
        this->height=height;
    }
    void step(int num) {
     int cycle=2*(width+height)-4;
     num=num%cycle;
     if(num==0){
        num=cycle;
     }   
    for(int i = 0;i<num;i++) {
            int nx=x+dirs[d].first;
            int ny=y+dirs[d].second;
            if(nx<0 || nx>=width || ny<0 || ny>=height) {
                d=(d+1)%4;
                i--;
                continue;
            }
            x=nx;
            y=ny;
        }
    }
    vector<int> getPos(){
        return{x,y};
    }
    string getDir() {
        if(d==0) return "East";
        if(d==1) return "North";
        if(d==2) return "West";
        return "South";
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */