//This C++ code compares two pairs of strings using the strcmp function and prints whether each pair is equal or not.
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib(){
    int result1, result2;
    char str1[] = "abcd";
    char str2[] = "abCd";
    char str3[] = "abcd";
   /* char str1[100],str2[100],str3[100];
     cin >> str1 >>str2 >> str2;*/
    result1 = strcmp(str1, str2);
    result2 = strcmp(str2, str3);

    if (result1 == 0)
    {
    cout << "the result1 is equal" << endl;
    }
     else
    {
        cout << "the result1 is not equal" << endl;
    }


    if (result2 == 0) {
    cout << "the result2 is equal" << endl;
    } else {
    cout << "the result2 is not equal" << endl;
    }


}

int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}
