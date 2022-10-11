/*/ Write a program to print the following pattern:

```
*
* *
* * *
* * * *
```
Submitted by:-sumitsaurabh3
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // ith row has i elements
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}
