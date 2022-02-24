#include <iostream>
using namespace std;

void sortArray(int* arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int buff = arr[i];
                arr[i] = arr[j];
                arr[j] = buff;
            }
        }
    }
}

int main()
{
    const int SIZE = 5;
    int arr[SIZE] = { 0 };
    cout << "\narr:\n";
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << "  ";
    }
    cout << "\n\nsorted arr:\n";

    sortArray(arr, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "  ";
    }


    cout << "\n\n";
}