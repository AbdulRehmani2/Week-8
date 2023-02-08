#include <iostream>

using namespace std;

int main()
{
    string word;
    int i = 0;
    cout << "Enter the word : ";
    getline(cin, word);
    i = word.length();
    while(i != -1)
    {
        cout << word[i];
        i--;
    }
}