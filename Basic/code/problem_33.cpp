/* Write a program to print the following pattern:

```
1
2 3
4 5 6
7 8 9 10

Submitted by:-sumitsaurabh3
```
*/
#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int k = 1;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j <= i; j++)
            cout << k++ << " ";
        cout << "\n";
    }
    return 0;
}
