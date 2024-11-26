#include <bits/stdc++.h>
using namespace std;

string s, ret;

int main()
{
    getline(cin,s);

    for (int i = 0; i < s.size(); i++)
    {    
        if (s[i] == ' ' || isdigit(s[i])) ret += s[i];
        else {
            if (isupper(s[i]))
            {
                if ((s[i] + 13) <= 'Z') ret += (s[i] + 13);
                else ret += (s[i] - 13);
            }
            else 
            {
                if ((s[i] + 13) <= 'z') ret += (s[i] + 13);
                else ret += (s[i] - 13);
            }
        }
    }
    cout << ret;


    return 0;
}