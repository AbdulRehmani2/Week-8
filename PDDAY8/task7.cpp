#include <iostream>

using namespace std;

int main()
{
    int size1, size2, counter = 0;
    string word1;
    string word2;
    cout << "Enter the first word : ";
    cin >> word1;
    cout << "Enter the second word : ";
    cin >> word2;
    size1 = word1.length();
    size2 = word2.length();
    for(int i = 0; i < size1; i++)
    {
        for(int j = 0; j < size2; j++)
        {
            if(word1[i] == word2[j])
            {
                counter++;
                word2[j] = '|';
                break;
            }
        }
    }
    cout << counter;
}