#include<bits/stdc++.h>
#include<chrono>
#include<thread>
using namespace std;
using namespace chrono;
long long op=0;
// here i will be taking the larger input sizes 
int partition(vector<int> &arr,int low,int high){
    int mid=(low+high)/2;
    int pivot=arr[mid];
    int i=low,j=high-1;
    while(i<=j){
        while(i<high&&arr[i]<=pivot){
            op++;
            i++;
        }
        while(j>=low&&arr[j]>pivot){
            op++;
            j--;
        }
        if(i<j){
            op++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i],arr[high]);
    return i;
}   
void quickSort(vector<int> &arr,int low,int high){
    if(low==high) return;
    if(low<high){   
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}
int main(){
    int n=4000;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        arr.push_back(rand());
    }
    auto start=high_resolution_clock::now();
    quickSort(arr,0,n-1);
    auto end=high_resolution_clock::now();
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    auto duration=duration_cast<microseconds>(end-start);
    cout<<n<<" "<<duration.count()<<endl;
    return 0;
}