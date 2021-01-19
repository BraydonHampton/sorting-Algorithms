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

void mergesort(int x[], int start, int end)
{
    
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

    mergesort(x, 0, n);

    std::cout << "Sorted List: " << std::endl;
    print(x, n);

    return 0;
}
