class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum=arr[0];
        int maxi=arr[0];
        for(int i=1 ; i<n ; i++){
            // sum += arr[i];
            sum = max(arr[i],sum+arr[i]);
            if(sum>maxi){
                maxi = sum;
            }
        }   
        return maxi;
    }
};