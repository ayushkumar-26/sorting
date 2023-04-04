#include<bits/stdc++.h>
using namespace std;
void count_sort(int arr[], int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++) maxi=max(maxi,arr[i]);
    int carr[maxi+1]={0};
    for(int i=0;i<size;i++){
        carr[arr[i]]++;
    }
    for(int i=1;i<maxi+1;i++) carr[i]+=carr[i-1];
    int newarr[size];
    for(int i=size-1;i>=0;i--){
        
        int index=--carr[arr[i]];
        newarr[index]=arr[i];
    }
    for(int i=0;i<size;i++) arr[i]=newarr[i];
    return;
}
int main(){
    int arr[10]={1,4,5,6,3,3,11,8,9,7};
    count_sort(arr,10);
    for(auto i:arr) cout<<i<<" ";
}