class Solution {
public:
 int dp[1001];
  int func(vector<int>& cost,int n,int i)
  {
    if(i>=n)
    {
        return 0;
    }
    if(dp[i]!=-1) return dp[i];
    int x= cost[i]+ func(cost,n,i+1);
    int y= cost[i]+ func(cost,n,i+2);
    return dp[i]=min(x,y);
  }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        memset(dp,-1,sizeof(dp));
        int ans= min(func(cost,n,0), func(cost,n,1));
        return ans;
    }
};
