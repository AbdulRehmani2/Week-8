#include <iostream>

using namespace std;

int digit(char n)
{
    if(n == '0')
    {
        return 0;
    }
    else if(n == '1')
    {
        return 1;
    }
    else if(n == '2')
    {
        return 2;
    }
    else if(n == '3')
    {
        return 3;
    }
    else if(n == '4')
    {
        return 4;
    }
    else if(n == '5')
    {
        return 5;
    }
    else if(n == '6')
    {
        return 6;
    }
    else if(n == '7')
    {
        return 7;
    }
    else if(n == '8')
    {
        return 8;
    }
    else if(n == '9')
    {
        return 9;
    }
    else
    {
        return 54;
    }
}

int main()
{
    int num, counter = 0;
    string pin;
    string moves[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    cout << "Enter the pin : ";
    cin >> pin;
    for(int i = 0; i < 4; i++)
    {
        num = digit(pin[i]);
        if(num == 54)
        {
            cout << "Invalid Input";
            exit(0);
        }
    }
    for(int i = 0; i < 4; i++)
    {
        num = digit(pin[i]);
        num = num + i;
        if(num > 9)
        {
            num = 9 - num;
        }
        cout << moves[num] << " ";
    }
}