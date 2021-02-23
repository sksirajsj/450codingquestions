int isPlaindrome(string s1)
	{
	    
        string s2=s1;
        reverse(s1.begin(),s1.end());
        if(s1==s2)
        return 1;
        return 0;

	}
