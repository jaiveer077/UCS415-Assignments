#include<bits/stdc++.h>
using namespace std;
int maximumSubarraySum(int arr[],int n){
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxsum=max(maxsum,sum);
        if(sum<0) sum=0;
    }
    return maxsum;
}
int main(){
    int arr[]={-9,-8,-1,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=maximumSubarraySum(arr,n);
    cout<<ans<<endl;
    return 0;
}