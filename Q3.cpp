#include <bits/stdc++.h>
using namespace std;

map<string, int> split(string str)
{
    int l=str.length();
    string wrd="";
    map<string, int> mp;
    for(int i=0; i<l; i++)
    {
        if(str[i]==' ')
        {
            if(mp.find(wrd)==mp.end())
            mp[wrd]=1;
            else
            mp[wrd]+=1;
        }
        else
        wrd+=str[i];
    }
    if(mp.find(wrd)==mp.end())
    mp[wrd]=1;
    else
    mp[wrd]+=1;
    return mp;
}
