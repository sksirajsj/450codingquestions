bool isPowerofTwo(long long n){
    
    if(n!=0 and !(n&n-1))
    {
        return true;
    }
    return false;
