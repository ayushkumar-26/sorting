#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n){
    for(int i=1;i<n;i++){
        bool swapped=false;    // for optimization
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]),  swapped=true;
        }
        if(!swapped) break;
    }
    return;
}
int main(){
    int arr[10]={2,7,6,5,9,8,0,3,4,1};
    bubblesort(arr,10);
    for(auto i:arr) cout<<i<<" ";
    return 0;
}