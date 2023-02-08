#include <iostream>

using namespace std;

int main()
{
    int size;
    int transform;
    cout << "Enter the size : ";
    cin >> size;
    int number[size];
    cout << "Enter the number of transformations : ";
    cin >> transform;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the number : ";
        cin >> number[i];
    }
    for(int i = 0; i < size; i++)
    {
        int num = transform;
        while(num != 0)
        {
            if(number[i] % 2 == 0)
            {
                number[i] = number[i] - 2;
            }
            else
            {
                number[i] = number[i] + 2;
            }
            num--;
        }
    }
    for(int i = 0; i < size; i++)
    {
        cout << number[i] << endl;
    }
}