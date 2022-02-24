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
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++){
       int element;
       cin>>element;
       m[element]++;
    }

    for(int i=1;i<=n;i++){
        if(i<m.size()){
            cout<<m.size()<<" ";
        }
        else{
            cout<<(i)<<" ";
        }
    }
    cout<<endl;
}
return 0;
}