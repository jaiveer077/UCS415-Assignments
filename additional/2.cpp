#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    vector<int> nums={2,5,3,2};
    int n=nums.size();
    if(n<=2){
        ll sum=0;
        for(auto c:nums) sum+=c;
        cout<<sum<<endl;
    } else {
        ll m1=LLONG_MIN,m2=LLONG_MIN;
        for(auto x:nums){
            if(x>m1){
                m2=m1;
                m1=x;
            } else if(x>m2){
                m2=x;
            }
        }
        cout<<m1+m2<<endl;
    }
    return 0;
}