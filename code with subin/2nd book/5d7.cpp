#include<bits/stdc++.h>
#define ll long long
#define yy cout<<"YES"<<endl
#define nn cout<<"NO"<<endl
#define nl "\n"
#define fl(i,a,n) for(int i=a; i<n; i++)
#define sp(n) fixed << setprecision(n)
using namespace std;

char to_upper(char ch)
{
    return ch & 95;
}

char to_lower(char ch)
{
    return ch | 32;
}

int main()
{
    string str="AbCdEfGhIjKlMnOpQrStUvWxYz";
    for (int i = 0; i < 26; i++)
    {
        cout<<"uppercase : "<<to_upper(str[i])<<nl;
        cout<<"lowercase : "<<to_lower(str[i])<<nl;
    }
    return 0;
}