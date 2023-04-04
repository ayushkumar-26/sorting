#include<bits/stdc++.h>
using namespace std;

// void solve(int arr[], int n){
//     //bubble sort
//     for(int i=1;i<n;i++){
//         bool swapped=false;
//         for(int j=0;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped=true;
//             }
//         }
//         if(!swapped) break;
//     }
//     return;
// }

// void solve(int arr[], int n){
//     //selection sort
//     for(int i=0;i<n-1;i++){
//         int mini=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[mini]>arr[j]){
//                 mini=j;
//             }
//         }
//         if(mini!=i)
//             swap(arr[i],arr[mini]);
//     }
//     return;
// }

// void solve(int arr[],int n){
    //inssertion sort
//     for(int i=1;i<n;i++){
//         int temp=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>temp){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=temp;
//     }
//     return;
// }

// int pivot(int arr[], int s, int e){
//     int piv=arr[e];
//     int mini=s;
//     for(int i=s; i<e;i++){
//         if(arr[i]<piv){
//             swap(arr[i],arr[mini++]);
//         }
//     }
//     swap(arr[mini],arr[e]);
//     return mini;
// }
// void qs(int arr[], int s, int e){
//     if(s>=e) return;
//     int p=pivot(arr,s,e);
//     qs(arr,s,p-1);
//     qs(arr,p+1,e);
// }
// void solve(int arr[],int n){
    //quick sort
//     qs(arr,0,n-1);
// }


// void merge(int arr[], int s, int m, int e){
//     int len1= m-s+1;
//     int len2=e-m;
//     int arr1[len1], arr2[len2];
//     int index=s;
//     for(int i=0;i<len1;i++) arr1[i]=arr[index++];
//     for(int i=0;i<len2;i++) arr2[i]=arr[index++];
//     int n1=0;
//     int n2=0;
//     index=s;
//     while(n1<len1 && n2<len2){
//         if(arr1[n1]<arr2[n2]) arr[index++]=arr1[n1++];
//         else arr[index++]=arr2[n2++];
//     }
//     while(n1<len1) arr[index++]=arr1[n1++];
//     while(n2<len2) arr[index++]=arr2[n2++];
//     return;
// }
// void ms(int arr[], int s, int e ){
//     if(s>=e) return;
//     int mid=s+(e-s)/2;
//     ms(arr, mid+1, e);
//     ms(arr,s,mid);
//     merge(arr,s,mid,e);
// }
// void solve(int arr[], int n){
    //merge sort
//     ms(arr, 0, n-1);
//  }

int main(){
    int arr[10]={9,8,7,6,5,4,3,2,1,0};
    solve(arr,10);
    for(int i:arr) cout<<i<<" ";
    return 0;
}