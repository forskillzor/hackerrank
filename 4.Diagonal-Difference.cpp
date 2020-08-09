#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int size = arr.size();
    int result = 0;
    for (int first = 0, second = size-1, row = 0; first < size; ++first, --second, ++row)
        result += arr[row][first] - arr[row][second];
    return abs(result);
}

int (*tested)(vector<vector<int>>) = diagonalDifference;

void test(vector<vector<int>> in, int out)
{
    static int counter = 1;
    double res;
    cout << "test: " ;
    cout.width(4);
    cout << counter << " "
         << (((res = (*tested)(in)) == out)
                ? ("\033[0;42m\033[1;37m" "PASSED" "\033[0m")
                : "\033[0;41m\033[1;37m" "FAILED" "\033[0m") << " "
         << "result: ";
    cout.width(4);
    cout << static_cast<double>(res) << " "
         << "solution: ";
    cout.width(4);
    cout << out
         << "\n";
    ++counter;
}

int main()
{
    test({{1, 2, 3}, {4, 5, 6}, {9, 8, 9}}, 17);
    return 0;
}

