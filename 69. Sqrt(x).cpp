class Solution {
    private:
    unsigned sq(unsigned x,unsigned i)
    {
        if(i*i==x){
            return i;
        }
        if(i*i>x){
            return i-1;
        }
        return sq(x,++i);
    }

    
public:    
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }
        unsigned i=2;
        return sq(x,i);
        }

};
