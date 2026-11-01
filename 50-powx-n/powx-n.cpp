class Solution {
public:
    double myPow(double x, int n) {
        long long yy=n;
       double ans=1.0;
       if(yy<0)yy=-1*yy;
       while(yy){
        if(yy%2){
            ans=ans*x;
            yy=yy-1;
        }
        else{
            x=x*x;
            yy=yy/2;
        }
       }
       if(n<0)ans=(double)(1.0)/(double)(ans);
       return ans;
    }
};