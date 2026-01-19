#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll n,h,w; 
    cin>>n>>h>>w;
    // total search space 
    ll low=0;
    ll high=max(h,w)*n*1ll;
    ll ans=high;
    while(low<=high){
        ll mid=(low+high)/2;
        if((mid/h)*(mid/w)>=n){
            ans=mid;
            high=mid-1; 
        } else {
            low=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}