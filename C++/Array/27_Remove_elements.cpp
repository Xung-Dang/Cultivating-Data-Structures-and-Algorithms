#include <iostream>
using namespace std;

int removeElement(int a[], int size, int value)
{
    int k = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] != value)
        {
            a[k] = a[i];
            k++;
        }
    }

    return k;
}

int removeElement_new_array(int a[], int size, int value, int result[])
{
    int newSize = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] != value)
        {
            result[newSize] = a[i];
            newSize++;
        }
    }

    return newSize;
}

int main()
{
    int a[] = {1, 3, 2, 3, 4, 3};
    int size = sizeof(a)/sizeof(a[0]);

    int result[size];

    int DeleteValue = 3;

    int newSize_new_array = removeElement_new_array(a, size, DeleteValue, result);

    cout << "New array: ";

    for (int i = 0; i < newSize_new_array; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    cout << "In-place: ";

    int newSize = removeElement(a, size, DeleteValue);

    for (int i = 0; i < newSize; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}