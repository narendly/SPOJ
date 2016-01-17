#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,k;
cin>>n>>k;
vector<int> nn,dm;
int data;
for(int i=0;i<n;i++)
{
cin>>data;
nn.push_back(data);         
}
sort(nn.begin(),nn.end());

int j;
for(j=0;j<=(n-k);j++)
dm.push_back(nn[j+k-1]-nn[j]);

sort(dm.begin(),dm.end());

cout<<dm.front()<<endl;
}     
return 0;
    
}