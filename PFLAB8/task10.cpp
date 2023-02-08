#include <iostream>

using namespace std;

int main()
{
    string word;
    char letter;
    bool flag = false;
    int length;
    cout << "Enter the word : ";
    getline(cin, word);
    cout << "Enter the character : ";
    cin >> letter;
    length = word.length();
    for(int i = 0; i < length; i++)
    {
        if(word[i] == letter)
        {
            cout << "Present";
            flag = true;
        }
    }
    if(flag == false)
    {
        cout << "Not Present";
    }
}