//! Factorial of number
// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     cout << " Factorial of " << n << " is " << fact << endl;
//     return fact;
// }
// int main()
// {
//     factorial(5);
//     return 0;
// }

//! Prime Number
// #include <iostream>
// using namespace std;

// bool isPrime(int n)
// {
//     if (n == 1)
//     {
//         return false;
//     }
//     for (int i = 2; i <= n - 1; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     cout << isPrime(5) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool isPrime(int n)
// {
//     if (n == 1)
//     {
//         return false;
//     }
//     for (int i = 2; i*i<= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     cout << isPrime(6) << endl;
//     return 0;
// }

//! Binomial Coefficient
// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// int binCoeff(int n, int r)
// {
//     return factorial(n) / (factorial(r) * factorial(n - r));
// }
// int main()
// {
//     cout << binCoeff(4, 2) << endl;
//     return 0;
// }


// !  Prime numbers in a range from 2 to n   
// #include <iostream>
// using namespace std;

// bool isPrime(int n)
// {
//     if (n == 1)
//     {
//         return false;
//     }
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// void allPrimes(int n)
// {
//     for (int i = 2; i <= n; i++)
//     {
//         if (isPrime(i))
//         {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }

// int main()
// {
//     allPrimes(35);
//     return 0;
// }