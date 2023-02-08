#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    float cgpa[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the cgpa : ";
        cin >> cgpa[i];
    }
    
    for(int i = 0; i < size; i++)
    {
        cout << cgpa[i] << " ";
    }
}