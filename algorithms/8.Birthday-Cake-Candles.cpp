#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int birthdayCakeCandles(vector<int> arr) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    int res = 0;
    int maxCandle = arr[0];
    for (int &item:arr)
        if (item == maxCandle)
            ++res;
    return res;
}

int (*tested)(vector<int> arr) = birthdayCakeCandles;

void test(vector<int> in, int out)
{
    static int counter = 1;
    int res;
    cout << "test: " ;
    cout.width(4);
    cout << counter << " " << (((res = (*tested)(in)) == out)
                ? ("\033[0;42m\033[1;37m" "PASSED" "\033[0m")
                : "\033[0;41m\033[1;37m" "FAILED" "\033[0m") << " ";
    cout << "result: ";
    cout.width(4);
    cout << res << " ";
    cout << "solution: ";
    cout.width(4);
    cout << out << "\n";
    ++counter;
}

int main()
{
    test( { 3, 2, 1, 3}, 2);
    return 0;
}
