#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    return {1,2,3};
}

ostream& operator<<(ostream& output, const vector<int> &vec){
    cout << "[ ";
    for(int x:vec)
        cout << x << " ";
    cout << "]";
    return output;
}

vector<int> (*tested)(vector<int>) = gradingStudents;

void test(vector<int> in, vector<int> out)
{
    static int counter = 1;
    vector<int> res;
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
    test({ 73, 67, 38, 33 }, { 75, 67, 40, 33 });
    return 0;
}
