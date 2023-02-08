#include <iostream>

using namespace std;

int main()
{
    string word;
    int length;
    cout << "Enter the word : ";
    getline(cin, word);
    length = word.length();
    for(int i = 0; i < length; i++)
    {
        word[i] = word[i] + 1;
    }
    cout << word;

}