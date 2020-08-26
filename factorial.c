double factorial(int m){
    unsigned int n;
    double total=m;
    if(m==0)
        return 1;
    else if(m<0){
        m=-1*m;
        //total=m;   // for positive result
        for(n=(m-1);n>=1;n--)
            total=total*n;
        return total;
    }
    else{
        for(n=m-1;n>=1;n--)
            total=total*n;
        return total;
    }
}

