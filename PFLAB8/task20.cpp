#include <iostream>

using namespace std;

int main()
{
    int size;
    float sum = 0;
    cout << "Enter the number : ";
    cin >> size;
    float R[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the resistance : ";
        cin >> R[i];
    }
    for(int i = 0; i < size; i++)
    {
        sum = sum + R[i];
    }
    cout << "The total resistance is : " << sum;
}