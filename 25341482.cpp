#include <iostream>

using namespace std;

int main()
{
    string s;
    int i;
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        if(s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u' and s[i]!=' ')
            cout << s[i]<<"o"<<s[i];
        else
            cout << s[i];
    }
    return 0;
}
