#include <iostream>

using namespace std;

int main()
{
    int size;
    int number;
    int num = 0;
    cout << "Enter the size : ";
    cin >> size;
    cout << "Enter the number : ";
    cin >> number;
    int array[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the element : ";
        cin >> array[i];
    }
    for(int i = 0; i < size; i++)
    {
        if(array[i] == number)
        {
            cout << "Present";
            num = 1;
            break;
        }
    }
    if(num == 0)
    {
        cout << "Not Present";
    }
}