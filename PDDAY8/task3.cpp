#include <iostream>

using namespace std;

string word;

bool isEven()
{
    int length;
    length = word.length();
    if(length % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    bool result;
    cout << "Enter the word : ";
    cin >> word;
    result = isEven();
    if(result == 1)
    {
        cout << "True";
    }
    else 
    {
        cout << "False";
    }
    
}