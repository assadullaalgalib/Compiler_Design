//check the declaer keyword "is a  keyword or not "
#include<bits/stdc++.h>
using namespace std;

void Galib(){

    int  flag = 0;
    char keyword[40][10] = {"main", "int ", "switch", "break", "do"," for", "for", "while", " if", "else","float", "double", "char", "bool", "void"};

    char string[20];
    cout << "Enter  the keyword : " ;
    cin.getline(string,20);
    int n ;
    for (int i = 0; i < n ; i++) {
        if (strcmp(string,keyword[i]) == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        cout << "It's a keyword." << endl;
    } else {
        cout << "It's not a keyword." << endl;
    }

}
int main()
{
    Galib();

    return 0;
}
