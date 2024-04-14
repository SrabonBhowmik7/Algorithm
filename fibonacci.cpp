#include <bits/stdc++.h>
using namespace std;
int dp[100];
int fab (int n)
{
    if (n==0 || n== 1)
        return n;
    if (dp[n]!=-1)
        return dp[n];
    dp[n]= fab(n-1)+fab(n-2);
        return dp[n];
}
int main ()
{
    int i,a;
    memset(dp,-1,sizeof(dp));
    cin >> i;
    a= fab(i);
    cout << a;
}
