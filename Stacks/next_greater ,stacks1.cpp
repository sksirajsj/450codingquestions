void nextgreater(vector<ll> v,vector<ll> &b)
{
    stack<pair<ll,ll>> st;
    st.push(mp(v[0],0));//mp=make_pair()(val,index)
    b.assign((ll)v.size(),v.size());
    for(ll i=1;i<v.size();i++)
    {
        ll next=v[i];
        while(!st.empty() and next>=st.top().first)
        {
            b[st.top().second]=next;
            st.pop();
        }
        st.push(mp(v[i],i));
    }
    while(!st.empty() )
        {
            b[st.top().second]=-1;
            st.pop();
        }
} 
