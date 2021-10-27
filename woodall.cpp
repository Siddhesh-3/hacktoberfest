// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isWoodall(int N){
        // code here
       for(int i=1;i<1000;i++){
           
           int j=i*(pow(2,i))-1;
         
           if(N==j)
              return 1;
       } return 0;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.isWoodall(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
