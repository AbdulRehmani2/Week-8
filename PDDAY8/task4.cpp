#include <iostream>

using namespace std;

int main()
{
    int size;
    int flag = 0;
    cout << "Enter the size : ";
    cin >> size;
    int number[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the number : ";
        cin >> number[i];
    }
    for(int i = 0; i < size; i++)
    {
        int num = number[i];
        while(num != 0)
        {
            int digit = num % 10;
            if(digit == 7)
            {
                flag = 1;
            }
            num = num / 10;
        }
    }
    if(flag == 1)
    {
        cout << "Boom!";
    }
    else
    {
        cout << "There is no seven present";
    }
}