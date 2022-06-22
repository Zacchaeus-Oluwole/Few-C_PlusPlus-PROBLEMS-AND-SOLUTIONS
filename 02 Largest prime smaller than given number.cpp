// A prime number is a number that has only two divisors, 1 and the number itself. To find
// the largest prime smaller than a given number you should first write a function that
// determines if a number is prime and then call this function, starting from the given number,
// towards 1 until the first prime is encountered. There are various algorithms for determining
// if a number is prime. Common implementations for determining the primality appear as
// follows:

#include <iostream>
using namespace std;


bool is_prime(int const num)
{
    if (num <= 3) { return num > 1; }
    else if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 5; i * i <= num; i += 6)
        {
            if (num % i == 0 || num % (i + 2) == 0)
            {
                return false;
            }
        }
        return true;
    }
}


int main(){

    int limit = 0;
    cout << "Upper limit:";
    cin >> limit;
    for (int i = limit; i > 1; i--)
    {
        if (is_prime(i))
        {
            cout << "Largest prime:" << i << std::endl;
            return 0;
        }
    }
}

