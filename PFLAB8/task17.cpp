#include <iostream>

using namespace std;

int main()
{
    int size, large;
    cout << "Enter the size : ";
    cin >> size;
    int num[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the number : ";
        cin >> num[i];
    }
    large = num[0];
    for(int i = 1; i < size; i++)
    {
        if(large < num[i])
        {
            large = num[i];
        }
    }
    cout << "The largest number is : " << large;

}