#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n){
    // for(int i=1;i<n;i++){
    //     int temp=arr[i];
    //     int j=i-1;
    //     while(j>=0){
    //         if(arr[j+1]<arr[j])
    //             swap(arr[j],arr[j+1]);
    //         else break;
    //         j--;
    //     }
    // }
    int i=1;
    while(i<n){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        swap(arr[j+1],temp);
        i++;
    }
    return ;
}



// void insertionsort(int arr[], int n){
//     int st=0;
//     for(int i=0;i<n;i++){
//         int count=st;
//         for(int j=st+1;j<n;j++){
//             if(arr[j]<arr[st]) count++; 
//         }
//         if(count==st) st++;
//         else swap(arr[st],arr[count]);
//     }
// }
int main(){
    int arr[10]={9,8,7,6,5,4,3,2,1,0};
    insertionsort(arr,10);
    for(auto i:arr) cout<<i<<" ";
    return 0;
}