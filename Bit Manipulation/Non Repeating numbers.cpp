vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int xo=0,x=0,y=0;
        for(int i=0;i<(int)nums.size();i++)
        {
            xo^=nums[i];
        }
        int right_set_bit=xo&(~(xo-1));
        for(int i=0;i<(int)nums.size();i++)
        {
            if(right_set_bit&nums[i])
            {
                x^=nums[i];
            }
            else
            {
                y^=nums[i];
            }
        }
        vector<int> v;
        v.push_back(x);
        v.push_back(y);
        sort(v.begin(),v.end());
        return v;
    }
