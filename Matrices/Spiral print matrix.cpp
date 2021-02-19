#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int startrow=0,startcol=0,endrow=r,endcol=c;
        vector<int> v;
        while(startrow<endrow and startcol<endcol)
        {
            for(int i=startcol;i<endcol;i++)
            {
                v.push_back(matrix[startrow][i]);
            }
            startrow++;
            
            for(int i=startrow;i<endrow;i++)
            {
                v.push_back(matrix[i][endcol-1]);
            }
            endcol--;

            if(startrow<endrow)
            {
                for(int i=endcol-1;i>=startcol;i--)
                {
                    v.push_back(matrix[endrow-1][i]);
                }
                endrow--;
            }
            if(startcol<endcol)
            {
                for(int i=endrow-1;i>=startrow;i--)
                {
                    v.push_back(matrix[i][startcol]);
                }
                startcol++;
            }
        }
        return v;
        
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
