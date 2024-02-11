// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main()
// {
//     int array[10];

//     int n;
//     cout << "Enter the size of array: ";
//     cin >> n; // Take input of array size

//     cout << "Enter the array elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i]; // take input of array elements
//     }

//     int key;
//     cout << "Enter the key: ";
//     cin >> key; // enter the key to find in an array
//     int i;
//     for ( i = 0; i < n; i++)
//     {
//         if (key == array[i])
//         {
//             cout << "The " << key << " present at index " << i << endl;
//             break;
//         }

//     }
//     if (i == n)

//         {
//             cout << "The " << key << " is not present in an array" << endl;
//         }
//     return 0;
// }

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{

    int array[] = {4, 5, 6, 8, 7, 1, 3, 2};
    int size = sizeof(array) / sizeof(array[0]);
    int key = 8;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            cout << "The " << key << " is present at index " << i << endl;
            break;
        }
    }
    if (key != size)
    {
        cout << "The key element is not present in an array" << endl;
    }

    return 0;
}
