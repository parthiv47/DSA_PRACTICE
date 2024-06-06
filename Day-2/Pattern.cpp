#include<bits/stdc++.h>
using namespace std;

void drawpattern(int n)
{
    
	for(int i=0; i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"*\n";
		}
		cout<<endl;
	}
}
int main()
{
  int n=4;
  drawpattern(n);
  return 0;
}