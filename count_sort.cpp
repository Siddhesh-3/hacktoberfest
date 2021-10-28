#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
int main(){
    // 1 3 2 3 4 1 6 4 3
    int n;
    cin>>n;
    int arr[n],mx=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mx=max(mx,arr[i]);
    }
    mx++;
    int count[mx]={0};
    for (int i = 0; i < n; i++)
    {
        (count[arr[i]])++;
    }
    
    for (int i = 1; i < mx; i++)
    {
        count[i]+=count[i-1];
    }
    int ans[n];
    for (int i = n-1; i >=0; i--)
    {
        ans[--count[arr[i]]]=arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    

    // int temp=0;
    // for (int i = 0; i < mx; i++)
    // {
    //     for (int j = 0; j < count[i]; j++)
    //     {
    //         arr[temp]=i;
    //         temp++;
    //     }
        
    // }
    
    
    
 return 0;
}
