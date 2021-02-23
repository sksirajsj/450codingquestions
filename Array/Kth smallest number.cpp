int kthSmallest(int arr[], int l, int r, int k) {
    vector<int> v;
    for(int i=0;i<r+1;i++)
    {
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    return v[k-1];
    
    //code here
}
