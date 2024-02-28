#include <bits/stdc++.h>
#define fu(i,a,b) for(int i= a; i < b; i++)
using namespace std;
long long n,q,p,a[1000005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    freopen("tvtt.inp","r",stdin);
    freopen("tvtt.out","w",stdout);
    cin >> n >> q >> p;
    fu(i,0,n+2) a[i] = 0;
    fu(i,1,q+1){
        long long x,y,z;
        cin >> x >> y >> z;
        a[x] += z;
        a[y+1] -= z;
    }
    fu(i,1,n+1) a[i] = a[i-1] + a[i];
    fu(i,2,n+1) a[i] = a[i-1] + a[i];
    fu(i,1,p+1){
        long long x,y;
        cin >> x >> y;
        cout << a[y]-a[x-1] << '\n';
    }
    return 0;
}
