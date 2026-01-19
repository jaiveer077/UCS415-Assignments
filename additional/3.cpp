#include<bits/stdc++.h>
using namespace std;
#define ll long long 
bool subarraysumk(vector<ll>& b,int k){
    unordered_map<ll,ll> fq;
    fq[0]=1;
    int prefixSum=0;
    for(auto x:b){
        prefixSum+=x;
        if(fq.count(prefixSum-k)){
            return 1;
        }
        fq[prefixSum]++;
    }
    return 0;
}
int main(){
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(auto &c:v) cin>>c;
    ll speciality=0;
    for(int i=0;i<n;i++){
        ll x=v[i];
        vector<ll> b(n);
        for(int j=0;j<n;j++){
            b[j]=(v[j]>x)?1:0;
        }
        if(subarraysumk(b,k)){
            speciality+=x;
        }
    }
    cout<<speciality<<endl;
    return 0;
}