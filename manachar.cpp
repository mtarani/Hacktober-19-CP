#include<bits/stdc++.h>//sahumohit
using namespace std;
#define SIZE 10000+1

int p[SIZE*2];

string newstr(string str)
{
    int n=str.size();
    string news = "@";

    for(int i=0 ; i<n ; i++)
    {
        news = news + "#" +str[i];
    }
    news = news + "#" + "$";
    return  news;
}

string lsp(string str)
{
    string s = newstr(str);
    int c=0 ; int r=0;

    for(int i=1 ; i<s.size()-1 ; i++)
    {
        int imirror = c - (i - c);

        if(r>i)
        p[i] = min(r-i , p[imirror]);


        while(s[i-1-p[i]] == s[i+1+p[i]] )
            p[i]++;

        if(i+p[i] > r)
            {r = i+p[i];
             c = i;
            }
    }
        int mp=0;
        int cp=0;

        for(int i=1 ; i<s.size()-1 ; i++)
        {
            if(p[i]>mp)
            {
                mp = p[i];
                cp = i;
            }
        }

        //cout<<mp<<endl;
        return str.substr((cp - 1 - mp)/2, mp);
}

int main()
{
    string str;
    cin>>str;
    cout<<lsp(str);
    return 0;
}
