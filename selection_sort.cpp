#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={9,8,7,6,5,4,3,2,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
        int mini=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[mini]) mini=j;
        }
        if(mini!=i) swap(arr[mini], arr[i]);
    }
    for(int i:arr) cout<<i<<" ";
    return 0;
}