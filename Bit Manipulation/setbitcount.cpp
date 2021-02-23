int setBits(int n) {
        // Write Your Code here
        int bit=0;
        while(n!=0)
        {
            if(n%2==1)
                bit++;
            n=n/2;
        }
        return bit;
    }
