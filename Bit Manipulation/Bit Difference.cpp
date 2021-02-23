int countBitsFlip(int a, int b){
    int ans=0;
    while(a!=0 or b!=0)
    {
        if((a&1)^(b&1))
            ans++;
        a/=2;
        b/=2;
    }
    return ans;
    
    // Your logic here
    
}
