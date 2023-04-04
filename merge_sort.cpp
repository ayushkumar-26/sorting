#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int st,int en){
    int mid=(st+en)/2;
    int arr1[mid-st+1];
    int arr2[en-mid];
    int j=0;
    
    for(int i=st;i<=mid;i++) arr1[j++]=arr[i];
    j=0;
    for(int i=mid+1;i<=en;i++) arr2[j++]=arr[i];
    int a=0, b=0;
    j=st;
    while(a<mid-st+1 && b<en-mid){
        if(arr1[a]<=arr2[b]) arr[j++]=arr1[a++];
        else arr[j++]=arr2[b++];
    }
    while(a<mid-st+1) arr[j++]=arr1[a++];
    while( b<en-mid) arr[j++]=arr2[b++];
    return ;
}
void mergesort(int arr[], int st, int en){
    if(st>=en) return ;
    int mid=(en+st)/2;
    mergesort(arr,st,mid);
    mergesort(arr,mid+1,en);
    merge(arr,st,en);
}
int main(){
    int arr[10]={1,3,6,5,4,7,8,9,0,2};
    mergesort(arr,0,9);
    for(int i:arr) cout<<i<<" ";
    return 0;
}