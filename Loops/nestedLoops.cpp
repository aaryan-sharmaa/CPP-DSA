// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         int val = i;
//         for (int j = 1; j <= 4; j++)
//         {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
// }

//* 1 1 1 1
//* 2 2 2 2
//* 3 3 3 3
//* 4 4 4 4

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }

// *
// * *
// * * *
// * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i+1; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }

// * * * *
// * * *
// * *
// *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

//* 1
//* 1 2
//* 1 2 3
//* 1 2 3 4

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
// }

//* A
//* B C
//* D E F
//* G H I J

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "* ";
//         for (int j = 1; j <= n-1; j++)
//         {
//             if(i == 1 || i == 4){
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << "* " << endl;
//     }
// }

// * * * * *
// *       *
// *       *
// * * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//         outer loop
//     for (int i = 1; i <= n; i++)
//     {
//             spaces loop
//         for (int k = 1; k <= n - i; k++)
//         {
//             cout << " " << " ";
//         }
//             star loop
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }

//       *
//     * *
//   * * *
// * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     int num = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
// }

//* 1
//* 2 3
//* 4 5 6
//* 7 8 9 10
//* 11 12 13 14 15

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//         // outer loop
//     for (int i = 1; i <= n; i++)
//     {
//             // spaces loop
//         for (int k = 1; k <= n - i; k++)
//         {
//             cout << " " << " ";
//         }
//             // star loop
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*" << " ";
//         }
//         for (int k = 2; k <= i; k++)
//         {
//             cout << "*" << " ";
//         }

//         cout << endl;
//     }
// }

//       *
//     * * *
//   * * * * *
// * * * * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     // outer loop
//     for (int i = 1; i <= n; i++)
//     {
//         // spaces loop
//         for (int k = 1; k <= n - i; k++)
//         {
//             cout << " " << " ";
//         }
//         // star loop
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     //outer loop
//     for (int x = n; x >= 1; x--)
//     {
//         // spaces loop
//         for (int y = 1; y <= n - x; y++)
//         {
//             cout << " " << " ";
//         }
//         // star loop
//         for (int z = 1; z <= 2 * x - 1; z++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }

//       * 
//     * * *
//   * * * * *
// * * * * * * *
// * * * * * * * 
//   * * * * *
//     * * *
//       *

