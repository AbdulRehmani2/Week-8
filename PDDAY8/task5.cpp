#include <iostream>

using namespace std;

int main()
{
    int flag = 0;
    string slot[4];
    for(int i = 0; i < 4; i++)
    {
        cout << "Enter the value : ";
        cin >> slot[i];
    }
    for(int i = 0; i < 3; i++)
    {
        if(slot[i] != slot[i+1])
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        cout << "False";
    }
    else
    {
        cout << "Ture";
    }
}