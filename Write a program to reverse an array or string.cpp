#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<unordered_map>
#include<unordered_set>
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
using namespace std;
int main(){
    Fast
    int n ;
    cin >> n;
    int arr[n],one[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    for(int i=0 ; i<n/2 ; i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

/*
1 2 3 4 -> 4 3 2 1
4 5 7 2 7 8 -> 8 7 2 7 5 4

*/