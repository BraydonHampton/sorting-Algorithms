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

int main()
{
    int n = 0;
    std::cin >> n;
    srand((unsigned int) time(NULL));
    int x[n];
    init(x, n);
    std::cout << "Random list: " << '\n';
    print(x, n);

    for (int i = 0; i < n - 1; ++i)
    {
        int minindex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (x[j] < x[minindex]) minindex = j;
        }
        int t = x[i];
        x[i] = x[minindex];
        x[minindex] = t;
    }

    std::cout << "Sorted list: " << '\n';
    print(x, n);    

    return 0;
}
