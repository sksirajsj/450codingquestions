vector<string> AllPossibleStrings(string s){
		    vector<string> v;
		    string k;
		    for(int i=1;i<(1<<s.size());i++)
		    {
		        k="";
		        for(int j=0;j<s.size();j++)
		        {
		            if(i&(1<<j))
		                k+=s[j];
		        }
		        v.push_back(k);
		    }
		    sort(v.begin(),v.end());
		    return v;
		}
