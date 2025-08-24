
#include <bits/stdc++.h>
using namespace std;

set<string>keywords = {"int", "float", "if", "else", "while"};

set<string>operators = {"+", "-", "*", "/" ,"=", "<", ">" };

set<char>punctuation = {';', ',', '(', ')', '{', '}', '[', ']'};

bool isIdentifier(string s)
{
    return regex_match(s,regex("[_a-zA-Z][_a-zA-Z0-9]*"));
}

bool isConstant(string s)
{
    return regex_match(s,regex("[0-9]+(\\.[0-9]+)?"));
}

int main ()
{
    ifstream file("fahad.txt");
    if(!file)
    {
        cerr << "Could not open file" << endl;
        return 1;
    }

    string word;

    while(file >> word)
    {
        if(keywords.count(word))
        {
            cout << word << " ----> keyword" << endl;;
        }
        else if(operators.count(word))
        {
            cout << word << " ----> operator" << endl;;
        }
        else if(word.size() == 1 && punctuation.count(word[0]))
        {
            cout << word << " ----> punctuation" << endl;
        }
        else if(isIdentifier(word))
        {
            cout << word << " ----> identifier" << endl;
        }
        else if(isConstant(word))
        {
            cout << word << " ----> constant" << endl;
        }
        else
        {
            cout << word << " ----> unknown" << endl;
        }
    }
    file.close();
}


