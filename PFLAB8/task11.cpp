#include <iostream>

using namespace std;

int main()
{
    string word;
    int length;
    int counter = 0;
    cout << "Enter the word : ";
    getline(cin, word);
    length = word.length();
    for(int i = 0; i < length; i++)
    {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            counter++;
        }
    }
    cout << "The number of vowels is : " << counter;
}