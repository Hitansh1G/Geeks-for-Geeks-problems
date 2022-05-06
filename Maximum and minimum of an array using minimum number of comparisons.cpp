pair<long long, long long> getMinMax(long long a[], int n) {
    long long c=INT_MAX;
    long long b=INT_MIN;
    for(int i=0;i<n;i++){
        if(c>a[i]){
            c=a[i];
        }
    }
    for(int j=0;j<n;j++){
        if(b<a[j]){
            b=a[j];
        }
    }
    return {c,b};
}