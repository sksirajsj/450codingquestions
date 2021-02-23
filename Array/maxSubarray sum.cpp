int maxSubarraySum(int arr[], int n){
    vector<int> dp(n);
    dp[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        dp[i]=max(dp[i-1]+arr[i],arr[i]);
    }
    return *max_element(dp.begin(),dp.end());
}
