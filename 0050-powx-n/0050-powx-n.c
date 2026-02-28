double myPow(double x, int n) {
    double pow_n=1;
    long long nn=n;
    int i;
    while(nn>0){
        if (nn%2==1){
            pow_n*=x;
        }
        x*=x;
        nn/=2;
    }
    if(nn<0){
        nn=-1*nn;
        for(i=1;i<=nn;i++)
            pow_n*=x;
        pow_n=1/pow_n;
    }
    
    return pow_n;
}