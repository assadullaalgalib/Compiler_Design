//check the input number is a number or not
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib(){

    char input[100] = "";
    cin >> input;
    int length;
    length = strlen(input);
    bool isNumber = true;
    for (int i = 0; i < length; i++)
    {
        if (!isdigit(input[i]))
        {
            isNumber = false;
            break;
        }
    }

    if (isNumber)
    {
    cout << "Entered is a number" <<nl;
    }
    else
    {
      cout << "Entered is not a number" <<nl;
    }
}

int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}


