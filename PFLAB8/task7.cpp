#include <iostream>

using namespace std;

int main()
{
    string word;
    int i = 0;
    cout << "Enter the word : ";
    getline(cin, word);
    while(word[i] != '\0')
    {
        cout << i << " " << word[i] << endl;
        i++;
    }
    cout << "The length of the string is : " << i;
}