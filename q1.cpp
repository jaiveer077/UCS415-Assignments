#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4,5};
    int n=nums.size();
    int target=3;
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(nums[mid]==target){
            cout<<"Element found at index "<<target<<endl;
            return 0;
        } else if(nums[mid]<target){
            l=mid+1;
        } else {
            r=mid-1;
        }
    }
    cout<<"Element not found in the array"<<endl;
    return 0;
}