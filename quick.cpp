#include <iostream>
#include <ctime>
#include <vector>

void init(int x[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        x[i] = 1 + rand() % size;
    }
}

void print(int x[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << x[i] << ", ";
    }
    std::cout << std::endl;
}
 

int partition(int x[], int start, int end)
{
    int pivot = x[end];
    int i = start - 1;

    for (int j = start; j <= end; ++j)
    {
        if(x[j] < pivot)
        {
            i++;
            int t = x[i];
            x[i] = x[j];
            x[j] = t;
        }
    }
    int t = x[i+1];
    x[i+1] = x[end];
    x[end] = t;
    
    
    return i + 1;
}

void quicksort(int x[], int start, int end)
{
    print(x, end +1);
    if (start < end)
    {
        int p = partition(x, start, end);
        

        quicksort(x, start, p - 1);
        quicksort(x, p + 1, end);
    }
}

int main()
{
    int n = 0;
    std::cin >> n;
    srand((unsigned int) time(NULL));
    int x[n];
    init(x, n);

    std::cout << "Unsorted List: " << std::endl;
    print(x, n);

    quicksort(x, 0, n-1);

    std::cout << "Sorted List: " << std::endl;
    print(x, n);

    return 0;
}
