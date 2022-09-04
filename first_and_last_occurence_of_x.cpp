#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    time complexity O(n);
    vector<int> occurence;
    vector<int> sol;
    bool occ = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            occ = true;
            occurence.push_back(i);
        }
    }
    if(occ) {
        sol.push_back(occurence[0]);
        sol.push_back(occurence[occurence.size() - 1]);
    } else {
        sol.push_back(-1);
        sol.push_back(-1);
    }
    return sol;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
