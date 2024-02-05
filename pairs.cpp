#include<iostream>
#include<string>
#include<map>
using namespace std;
int main ()
{
    int n,m;
    cin>>n;
    map<int, int>c;
    map<int, int>t;
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        int a, x; cin>>a>>x;
        c.insert(make_pair(a,x));
    }
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int b, y; cin>>b>>y;
        t.insert(make_pair(b,y));
    }
    for(map<int,int>::iterator it=c.begin(); it!=c.end(); it++)
    {
        int k=it->first;
        if(t.count(k)==0)sum=sum+c[k];
        else
        {
            if(t[k]>c[k])sum=sum+t[k];
            else sum=sum+c[k];
        }
    }
    for(map<int,int>::iterator it=t.begin(); it!=t.end(); it++)
    {
        int k=it->first;
        if(c.count(k)==0)sum=sum+t[k];
    }
    cout<<sum;

    return 0;
}
