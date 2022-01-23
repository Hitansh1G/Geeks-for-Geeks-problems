class Solution{
	public:
   	long long int prime_Sum(int n){
   	    // Code here
   	    int sieve[n+1]={0};
        for(int i=2;i*i<=n;i++){
            if(sieve[i]==0){
                for(int j=i*2;j<=n;j+=i){
                    sieve[j]=1;
                }
            } 
        }
        long long sum=0;
        sieve[0]=sieve[1]=1;
        for(int i=2;i<=n;i++){
            if(sieve[i]==0){
            sum+=i;
            }
        }
    return sum;   
    }  

};