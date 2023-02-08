#include <iostream>

using namespace std;

int main()
{
    int size;
    int number;
    cout << "Enter the size : ";
    cin >> size;
    int array[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the element : ";
        cin >> array[i];
    }
    number = array[0];
    for(int i = 1; i < size; i++)
    {
        if(number < array[i])
        {
            continue;
        }
        else
        {
            number = array[i];
        }
    }
    cout << number;
}