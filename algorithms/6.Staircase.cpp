#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for (int i = 0; i < n; ++i) {
        int j = 0;
        for ( ; j < (n-1)-i; ++j) {
            cout <<  ' ';
        }
        for ( ; j < n; ++j) {
            cout << '#';
        }
        cout << '\n';
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
