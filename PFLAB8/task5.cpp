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
    cout << "Enter the number : ";
    cin >> number;
    for(int i = size-1; i >= 0; i--)
    {
        cout << array[i] * number << endl;
    }
}
