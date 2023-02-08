#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int size;
    float average;
    cout << "Enter the size : ";
    cin >> size;
    int array[size];
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter the number : ";
        cin >> array[i];
    }
    for(int i = 0; i < 5; i++)
    {
        sum = sum + array[i];
    }
    average = sum / size;
    cout << "Sum : " << sum << endl << "Average : " << average;
}