#include <iostream>
using namespace std;

// just write the code that is inside the
// "main" function on the answer sheet!
int main()
{
    // DEKLARASI
    int n, row, column;
    // ALGORITMA
    cout << "Masukkan nilai N: ";
    cin >> n;

    for (row = 0; row < n; row++)
    {
        for (column = 0; column < n; column++)
        {
            cout << n << " ";

            if (column == (n - 1))
            {
                cout << endl;
            }
        }
    }

    // stop here!
    system("pause");
    return 0;
}
