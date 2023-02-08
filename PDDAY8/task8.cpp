#include <iostream>

using namespace std;

int main()
{
    int size, counter = 0, time;
    cout << "Enter the no of squares : ";
    cin >> size;
    string color[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the color : ";
        cin >> color[i];
    }
    for(int i = 1; i < size; i++)
    {
        if(color[i] != color[i-1])
        {
            counter++;
        }
    }
    time = size * 2 + (counter++);
    cout << time;
}