#include <iostream>

using namespace std;

int main()
{
    float price;
    float amount;
    float money[4];
    cout << "Enter the price : ";
    cin >> price;
    for(int i = 0; i < 4; i++)
    {
        cout << "Enter the money : ";
        cin >> money[i];
    }
    amount = money[0] * 0.25 + money[1] * 0.1 + money[2] * 0.05 + money[3] * 0.01;
    if(amount >= price)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}