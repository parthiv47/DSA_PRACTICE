#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={3,4,7,5,18,11};
    int n=6;
    sort(a,a+n);
   // sort(a,a+n,greater<>); for deseanding order 

    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<endl;
    }
    vector<int>v;
    v.push_back(27);
    v.push_back(26);
    v.push_back(23);
    v.push_back(24);
    sort(v.begin(),v.end());
    for(auto it :v)
    {
        cout<<it<<endl;
    }
    return 0;
}