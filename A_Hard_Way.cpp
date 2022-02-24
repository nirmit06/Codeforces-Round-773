#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
int x1,y1,x2,y2,x3,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;

if((y1==y2 && y3<y2) || (y2==y3 && y1<y2) || (y1==y3 && y2<y1)){
    if(y1==y2) cout<<abs(x1-x2)<<"\n";
    else if(y2==y3) cout<<abs(x2-x3)<<"\n";
    else if(y1==y3) cout<<abs(x1-x3)<<"\n";
}
else{
    cout<<0<<"\n";
}
}
return 0;
}