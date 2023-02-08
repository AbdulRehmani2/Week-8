#include <iostream>

using namespace std;

int main()
{
    float price = 500;
    string movie[5] = {"Gladiator", "StarWars", "Terminator", "TakingLive", "TombRider"};
    string name;
    cout << "Enter the name of the movie : ";
    cin >> name;
    for(int i = 0; i < 5; i++)
    {
        if(name == movie[i])
        {
            if(i % 2 == 0)
            {
                price = price - 0.1*price;
            }
            else
            {
                price = price - 0.05*price;
            }
        }
    }
    cout << "The total price is : " << price; 
}