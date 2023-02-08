#include <iostream>

using namespace std;

int main()
{
    int array1[2] = {9, 9};
    int size;
    int array2[] = {2, 3, 4, 5, 6};
    size = sizeof(array2)/4;
    int array[size + 2];
    array[0] = array1[0];
    array[size + 1] = array1[1];
    for(int i = 1; i < size + 1; i++)
    {
        array[i] = array2[i-1];
    }
    for(int i = 0; i < size+2; i++)
    {
        cout << array[i] << endl;
    }
}