//check integer
#include<iostream>
using namespace std;

int main()
{
    char _name[50];
    char speacial_char[]={'`','~','!','@','#','$','%','^','&','*','(',')','_','+','=','-','[',']','{',
    '}',':',';','<','>','?','/','.',','};
    cout<<"Enter variable name :";
    gets(_name);
    if(isdigit(_name[0]))
    {
        cout<<"Variable name cannot start with digit"<<endl;
        return 0;

    }
    for(int i=0;i<22;i++)
    {
        if(_name[0]==speacial_char[i])
        {
            cout<<"Variable name cannot start with special char"<<endl;
            return 0;
        }
    }
    cout<<"Variable name is correct"<<endl;
    return 0;
}
