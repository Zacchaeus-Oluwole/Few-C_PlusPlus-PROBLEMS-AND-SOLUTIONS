// Sexy prime numbers are prime numbers that differ from each other by six (for example 5
// and 11, or 13 and 19). There are also twin primes, which differ by two, and cousin primes,
// which differ by four.
// In the previous challenge, we implemented a function that determines whether an integer is
// a prime number. We will reuse that function for this exercise. What you have to do is check
// that if a number n is prime, the number n+6 is also prime, and in this case print the pair to
// the console:

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

int main()
{
    int limit = 0;
    cout << "Upper limit:";
    cin >> limit;
    for (int n = 2; n <= limit; n++)
    {
        if (is_prime(n) && is_prime(n+6))
            {
                cout << n << "," << n+6 << std::endl;
            }
    }
}