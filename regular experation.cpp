#include<iostream>
using namespace std;

int main(){
    cout << "Please choose an operation: " << endl;
    cout << "1. | operation (enter '|')" << endl;
    cout << "2. . operation (enter '.' ) " << endl;
    cout << "3. * operation (enter '*')" << endl;
    char check;
    cin >> check;
    string a, b;
    char ab;
    string c, c2;
    char c1;
    string en;
    char en2;

    if (check == '|'){
        cin >> a >> ab >> b;
    }
    if (check == '.'){
        cin >> c >> c1 >> c2;
    }
    if (check == '*'){
        cin >> en >> en2;
    }
    switch (check){
    case '|':
        cout << "{" << a << "," << b << "}" << endl;
        break;

    case '.':
        cout << c << c2 << endl;
        break;

    case '*':
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < i; j++){
                cout << en;
            }
            cout << endl;
        }
    }
}
