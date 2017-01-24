#include <iostream>
#include <cmath>

// Given a number N. The task is to print all possible sums of consecutive numbers that add up to N.
// http://www.geeksforgeeks.org/print-possible-sums-consecutive-numbers-sum-n/

//
// x - starting number of a sequence
// n - number of elements in a sequence
// (x + x + n) * (n + 1) / 2 == N
// n*n + (2x+1)*n + (2x-2n) == 0
// Solutions are n1 and n2.
// if they are positive and non-foating point, we have found one sequence

int main()
{
    const int N = 5656;
    std::cout << "N = " << N << std::endl;
    double b = 0;
    double c = 0;
    double d = 0;
    double n1 = 0;
    double n2 = 0;
    for(int x = 1; x < (N+1)/2; ++x)
    {
        b = 2 * x + 1;
        c = 2 * (x - N);
        d = sqrt(b*b - 4*c);
        n1 = (-b + d)/2;
        n2 = (-b - d)/2;
        if(n1 > 0 && (n1 - (int)n1) == 0.0)
        {
            std::cout << "from " << x << " to " << x + n1 << std::endl;
        }
        if(n2 > 0 && n2 - (int)n2 == 0.0)
        {
            std::cout << "from " << x << " to " << x + n2 << std::endl;
        }
    }

    return 0;
}
