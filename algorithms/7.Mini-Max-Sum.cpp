#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

pair<int, int> miniMaxSum(vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    unsigned long min = 0, max = 0;

    for (unsigned long i = 0; i < arr.size() - 1; ++i)
        min += arr[i];
    for (unsigned long i = arr.size() - 1; i > 0; --i)
        max += arr[i];

    return pair<int, int>{min, max};
}

pair<int, int> (*tested)(vector<int> arr) = miniMaxSum;

void test(vector<int> in, pair<int, int> out)
{
    static int counter = 1;
    pair<int, int> res;
    cout << "test: " ;
    cout.width(4);
    cout << counter << " "
         << (((res = (*tested)(in)) == out)
                ? ("\033[0;42m\033[1;37m" "PASSED" "\033[0m")
                : "\033[0;41m\033[1;37m" "FAILED" "\033[0m") << " "
         << "result: ";
    cout.width(4);
    cout << res.first << " " << res.second << " "
         << "solution: ";
    cout.width(4);
    cout << out.first << " " << out.second
         << "\n";
    ++counter;
}

int main()
{
    test( {1, 3, 5, 7, 9}, {16, 24} );
    return 0;
}

