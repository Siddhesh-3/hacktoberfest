//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
 class Solution {
  public:
void getSubSums(int index, vector<int> &arr, int sum, vector<int> v, vector<vector<int>> &ans){
    if (index==arr.size()){
        if (sum==0)
            ans.push_back(v);
        return;
    }
    
    getSubSums(index+1, arr, sum, v, ans);  // not pick
    
    if (arr[index]<=sum){ // pick
        v.push_back(arr[index]);  // pick
        getSubSums(index, arr, sum-arr[index], v, ans);  // pick    
    }
}
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        set<int> s;
    vector<vector<int>> ans;
    vector<int> v;
    // removing duplicates from A and sorting it
    for (auto i:A)  
        s.insert(i);
    A.clear();
    for (auto i:s)
        A.push_back(i);
        
    getSubSums(0, A, B, v, ans);
    
    sort(ans.begin(), ans.end());
    return ans; 
    }
};


// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends
