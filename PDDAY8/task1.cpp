#include <iostream>

using namespace std;

int main()
{
    string fruits[] = {"peach", "guava", "apple", "watermelon"};
    int prices[] = {60, 70, 40, 30};
    string name;
    float quantity;
    int size;
    cout << "Enter the name of the fruit : ";
    cin >> name;
    cout << "Enter the quantity : ";
    cin >> quantity;
    size = sizeof(fruits)/24;
    for(int i = 0; i < size; i++)
    {
        if(name == fruits[i])
        {
            cout << prices[i] * quantity;
        }
    }
}