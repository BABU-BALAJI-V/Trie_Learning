#include<iostream>
using namespace std;

//Trie Structure

class TrieNode
{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    TrieNode(char ch)
    {
        data=ch;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        isTerminal=false;
    }
};

class Trie
{
    public:
    TrieNode* root;
    void insertUtil(TrieNode* root,string word)
    {
        //base case
        if(word.length()==0)
        {
            root->isTerminal=true;
        }   
        int index=word[0]-'A';
    }

    void insertWord(string word)
    {
        insertUtil(root,word);
    }
};
int main()
{

}