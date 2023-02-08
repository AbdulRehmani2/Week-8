#include <iostream>

using namespace std;

int main()
{
    string word;
    int i;
    cout << "Enter the word : ";
    getline(cin, word);
    i = word.length();
    if(i % 2 == 0)
    {
        cout << "Even";
    }
    else 
    {
        cout << "Odd";
    }
}