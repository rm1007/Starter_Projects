#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int currsum=0;
     int max_sum=INT_MIN;
     for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
     }
     max_sum=max(max_sum,currsum);
     cout<<max_sum;

}
