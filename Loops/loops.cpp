// #include <iostream>
// using namespace std;

// int main()
// {
//   int n = 10829, lastDig;
//   int sum = 0;
//   while (n > 0)

//   {
//     lastDig = n % 10;
//     n /= 10;
//     sum += lastDig;
//   }
//   cout << sum << endl;
// }

// * Armstrong Number
// #include <iostream>
// using namespace std;

// int main()
// {
//   int num = 153;
//   int cubeSum;
//   int n = num;

//   int Dig1 = n % 10;
//   n /= 10;
//   int Dig2 = n % 10;
//   n /= 10;
//   int Dig3 = n % 10;
//   cubeSum = (Dig1 * Dig1 * Dig1) + (Dig2 * Dig2 * Dig2) + (Dig3 * Dig3 * Dig3);
//   if (cubeSum == num)
//   {
//     cout << "It is an armstrong number" << endl;
//   }
//   else
//   {
//     cout << "It is not an armstrong number" << endl;
//   }
// }



// #include <iostream>
// using namespace std;

// int main()
// {
//   int n = 19, lastDig;
//   int sum = 0;
//   while (n > 0)

//   {
//     lastDig = n % 10;
//     if (lastDig % 2 != 0)
//     {
//       n /= 10;
//       sum += lastDig;
//         }
//   }
//   cout << sum << endl;
// }

// * Mutiplication Table of a number
// #include <iostream>
// using namespace std;

// int main()
// {
//   int num;
//   cout << "Enter number : " ;
//   cin >> num;
//   for (int i = 1; i <= 10; i++)
//   {
//     cout << num << " * " << i << " = "<< num * i  << endl;
//   }

// }


//*Armstrong number using while loop
// #include <iostream>
// using namespace std;

// int main()
// {
//   int num, lastDig, cubeSum = 0;
//   cout << "Enter number : ";
//   cin >> num;

//   int n = num;
//   while (n > 0)
//   {
//     lastDig = n % 10;
//     cubeSum += lastDig * lastDig * lastDig;
//     n /= 10;
//   }
//   if (num == cubeSum)
//   {
//     cout << "number is armstrong" << endl;
//   }
//   else
//   {
//     cout << "number is not armstrong" << endl;
//   }
// }
