#include <iostream>
using namespace std;
class Selection_Sort
{
public:
    void sortArray(int arr[], int size)
    {
        int count = 0;
        for (int i = 0; i < size - 1; i++)
        {
            int minindex = i;
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[minindex])
                {
                    minindex = j;
                }
                count++;
            }
            if (minindex != i)
            {
                int temp = arr[i];
                arr[i] = arr[minindex];
                arr[minindex] = temp;
            }
        }
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << "   ";
        }
        cout << endl;
        cout << "Count is : " << count << endl;
    }
};

int main()
{
    // int arr[] = {12, 9, 4, 2, 6, 17, 1, 3, 10, 5};
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = 10;
    cout << endl;
    Selection_Sort s;
    s.sortArray(arr, size);
    return 0;
}