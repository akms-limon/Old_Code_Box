#include<bits/stdc++.h>
#define ll long long
#define fl(i,a,n) for(int i=a; i<n; i++)
#define sp(n) fixed << setprecision(n)
using namespace std;

int main()
{
    int x, n, m;
    while(1)
    {
        cout<<"enter your number :"<<endl;
        cin>>x;
        cout<<"how many bits you want to shift :"<<endl;
        cin>>n;
        cout<<"After shift left your number is : "<<(x<<n)<<endl;
        cout<<"After shift right your number is : "<<(x>>n)<<endl;
    }
    return 0;
}