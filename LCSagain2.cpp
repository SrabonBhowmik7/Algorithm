#include <bits/stdc++.h>
using namespace std;
string a,b;
int dp [100] [100];
int LCS (int i, int j)
{
    if (a[i]== '\0' || b[j]=='\0')
        return 0;
    if (dp[i][j]!= -1)
        return dp [i] [j];
    if (a[i]==b[j])
        return 1+LCS(i+1,j+1);
    if (a[i]!=b[j])
        return dp [i][j]=max(LCS(i,j+1), LCS(j+1, i));


}

int main ()
{
    memset(dp,-1,sizeof(dp));
    int len = 0;
    cin >> a>> b;

    len = LCS(0,0);
    cout << len;
}
