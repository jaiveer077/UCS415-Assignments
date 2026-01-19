#include<bits/stdc++.h>
using namespace std;
int main(){
    const int inf=1e9;
    vector<int> nums={1,2,3,4,5,6,inf,inf,inf,inf,inf,inf,inf}; // infinte array
    int x; cin>>x;
    // find right boundary 
    int r=1;
    while(r<nums.size()&&nums[r]<x){
        r*=2;
    }
    int l=r/2;
    while(l<=r){
        int mid=(l+(r-l))/2;
        if(nums[mid]==x){
            cout<<"Target found at index "<<mid<<endl;
            return 0;
        } else if(nums[mid]<x){
            l=mid+1;
        } else {
            r=mid-1;
        }
    }
    cout<<"Element not found in the array!"<<endl;
    return 0;
}