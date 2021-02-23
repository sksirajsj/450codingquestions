int findPosition(int n) {
        if(n==0 or (n&(n-1)))
            return -1;
        int pos=0,ans=0;
        while(n!=0)
        {
            pos++;
            if(n&1)
            {
                ans=pos;
            }
            n=n/2;
        }
        return ans;
        // code here
    }
