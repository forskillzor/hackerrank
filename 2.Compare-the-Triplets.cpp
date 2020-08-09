//
// Created by skillzor on 7/27/20.
//
#include<vector>
#include<iostream>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> result(2);
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] > b[i])
            ++result[0];
        if (a[i] < b[i])
        ++result[1];
    }
    return result;
}
void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << "\n";
}
/*
     5 6 7
     3 6 10
     1 1
 */

int main()
{
    vector<int> alice{ 5, 6, 7 };
    vector<int> bob{3, 6, 10 };
    printVector(compareTriplets(alice, bob));
}
