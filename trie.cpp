#include<bits/stdc++.h> //sahumohit
#define ll long long
#define mod 1000000007
using namespace std;

const int alphasize = 26;

struct trienode
{
    //one trie node contains 26 characters and a bool indicator indicate it is end of word or not.
    trienode * children[alphasize];

    bool isendofword;
};

trienode* getnode ()
{
    trienode * temp = new trienode;

    for(int i=0 ; i<alphasize ; i++)
    {
        temp->children[i]=NULL;
    }
    temp->isendofword = false;

    return temp;
}

void insertt (trienode * root , string key)
{
    trienode * temp = root;

    for(int i=0 ; i<key.length() ; i++)
    {
        int index = key[i]-'a';
        if(!temp->children[index])
            temp->children[index]=getnode();

        temp = temp->children[index];
    }
    temp->isendofword = true;
}

bool searchh (trienode * root , string key)
{
    trienode * temp = root;

    for(int i=0 ; i<key.length() ; i++)
    {
        int index = key[i]-'a';
        if(!temp->children[index])
            return false;

        temp = temp->children[index];
    }
    return (temp!=NULL && temp->isendofword);
}

int main()
{
    string keys[] = {"the", "a", "there",
                    "answer", "any", "by",
                     "bye", "their" };
    int n = sizeof(keys)/sizeof(keys[0]);

    struct trienode *root = getnode();

    // Construct trie
    for (int i = 0; i < n; i++)
        insertt(root, keys[i]);

    // Search for different keys
    searchh(root, "the")? cout << "Yes\n" :
                         cout << "No\n";
    searchh(root, "these")? cout << "Yes\n" :
                           cout << "No\n";
    return 0;
}
