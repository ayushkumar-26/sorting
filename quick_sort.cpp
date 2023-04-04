#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int st, int en){
    int i=st;
    int part=en;
    for(int j=st;j<en;j++){
        if(arr[j]<=arr[part]){
            swap(arr[j],arr[i]);
            i++;
        }
    }
    swap(arr[i],arr[part]);
    return i;
}
void quicksort(int arr[], int st, int en){
    if(st>=en) return ;
    int p=partition(arr,st,en);
    quicksort(arr,p+1,en);
    quicksort(arr,st,p-1);
}
int main(){
    int arr[10]={1,3,6,5,4,7,8,9,0,2};
    quicksort(arr,0,9);
    for(int i:arr) cout<<i<<" ";
    return 0;
}