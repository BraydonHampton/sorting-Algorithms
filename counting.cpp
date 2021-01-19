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

void countingsort(int x[], int x_len)
{
    int count[x_len];

    for (int i = 0; i < x_len; ++i)
    {
        ++count[x[i]];
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

    countingsort(x, n);

    std::cout << "Sorted List: " << std::endl;
    print(x, n);

    return 0;
}
