#include <iostream>
#include <ctime>

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

void swap(int & x, int & y)
{
    int t = y;
    y = x;
    x = t;
}

int main()
{
    int n = 0;
    std::cin >> n;
    srand((unsigned int) time(NULL));
    int x[n];
    init(x, n);

    std::cout << "Unsorted list: " << std::endl;
    print(x, n);
    
    for (int i = 2; i <= n; ++i)
    {
        if (i != n) swap(x[i], x[i-1]);
        for (int j = i - 1; j > 0; --j)
        {
            if (x[j] < x[j-1]) swap(x[j], x[j-1]);
            else break;
        }
    }

    std::cout << "Sorted list: " << std::endl;
    print(x, n);
    
    return 0;
}
