// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int mod=1000000007;
    int f(int i,int k,int arr[],vector<vector<int>>&dp){
        if(i==0){
            if(k==0 && arr[0]==0)
                return 2;
            if(k==0 ||k==arr[0])
                return 1;
        return 0;
        }
        if(dp[i][k]!=-1)
            return dp[i][k]%mod;
        int notPick=f(i-1,k,arr,dp);
        int pick=0;
        if(k>=arr[i])
            pick=f(i-1,k-arr[i],arr,dp);
        return dp[i][k]=(notPick+pick)%mod;
        }
        int perfectSum(int arr[], int n, int sum){
            vector<vector<int>>dp(n,vector<int>(sum+1,-1));
            return f(n-1,sum,arr,dp)%mod;
        }
	  
};
/*
int n = nums.size();
        int t[n+1][sum+1];
        memset(t,0,sizeof(t));
        // for(int i=0 ; i<n+1 ; i++){
        //     for(int j=0 ; j<sum+1 ; j++){
        //         if(i==0) t[i][j] = 0;
        //         if(j==0) t[i][j] = 1;
        //     }
        // }
        for(int i=0 ; i<n+1 ; i++){
            for(int j=0 ; j<sum+1 ; j++){
                if(nums[i-1]<=j){
                    t[i][j]=t[i-1][j-nums[i-1]] + t[i-1][j];
                }
                else t[i][j]=t[i-1][j];
            }
        }
        return t[n][sum];
        
    }
    */

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends