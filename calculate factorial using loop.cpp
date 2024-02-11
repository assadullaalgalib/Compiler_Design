
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib(){

    int n ;
    cin >>n;
    int fact = 1;
    for (int i =1; i <=n; i++) {
    fact = fact *i;
}
    cout << fact << nl;
}

int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}
