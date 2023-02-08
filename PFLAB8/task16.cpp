#include <iostream>

using namespace std;

int main()
{
    int size;
    int number;
    cout << "Enter the size of the array : ";
    cin >> size;
    int num[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the element : ";
        cin >> num[i];
    }
    cout << "Enter the number : ";
    cin >> number;
    for(int i = 0; i < size; i++)
    {
        if(num[i] == number)
        {
            cout << "Already Entered";
        }
    }
}