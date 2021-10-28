/*Chef has a new customer and he wants to prepare his order as soon as possible.
While preparing, he sees that the mint sauce is finished. He has to run upstairs to get it from other kitchen.
Chef is currently on the Xth stair. He has to climb all the way up to the Yth stair in minimum number of steps.
In one step, Chef can do one of the following things:
Climb a single stair. ( i.e go from the Xth stair to the (X+1)th stair. )
Climb two stairs only if the final stair falls at a prime number position.
( i.e. go from the Xth stair to the (X+2)th stair, only if (X+2) is a prime number)
Help Chef reach the Yth stair from the Xth stair in minimum number of steps.*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// int prime1(int m)
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     if(m%2==0)
//     return(0);
//     for(int i=3;i<=sqrt(m);i+=2)
//     {
//         if(m%i==0)
//         return(0);
//     }
//     return(1);
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> p;
        int x,y;
        cin>>x>>y;
        int m=x;
        if(x%2==0)
        m++;
        else
        m+=2;
        for(int i=m;i<=y;i+=2)
        {
            int k=0;
            for(int j=3;j<=sqrt(i);j+=2)
            {
                if(i%j==0)
                {
                    k++;
                    break;
                }
            }
            if(k==0)
            p.push_back(i);
        }
        int q=p.size();
        // int d=0;
        // while(x<y)
        // {
        //     if((x%2!=0)&&(prime1(x+2)==1))
        //     {
        //         x=x+2;
        //         d++;
        //     }
        //     else{
        //         x++;
        //         d++;
        //     }
            // cout<<x<<" ";
        //     for (auto it = p.begin(); it != p.end(); it++)
        // cout << *it << " ";
        // p.clear();
        // cout<<endl;
        int z=y-x-q;
        if(x+1==p.front())
        z++;
        cout<<z<<endl;
        // cout<<(y-x-q)<<endl;
        }
        // cout<<endl;
        // cout<<d<<endl;
        
    
    return 0;
}