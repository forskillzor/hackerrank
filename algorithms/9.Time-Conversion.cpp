#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

string getHour(string s) {
    int h = std::stoi(s.substr(0, 2));
    string res;
    if (h == 12)
        h = 0;
    if (s.substr(s.size()-2, 2) == "AM") {
        res = to_string(h);
        if (res.size() < 2)
            res.insert(res.begin(), '0');
        return res;
    } else if (s.substr(s.size() - 2, 2) == "PM") {
        return to_string(h + 12);
    } 
    return " ";
}

string timeConversion(string s) {
    string hour = getHour(s);
    s.erase(s.begin(), s.begin() + 2);
    s.erase(s.end() - 2, s.end());
    return hour+s;
}

string (*tested)(string) = timeConversion;

void test(string in, string out)
{
    static int counter = 1;
    string res;
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
    test("07:05:45PM", "19:05:45");
    test("07:05:45AM", "07:05:45");
    test("11:05:45AM", "11:05:45");
    test("11:05:45PM", "23:05:45");
    test("12:00:00AM", "00:00:00");
    test("12:45:54PM", "12:45:54");
    return 0;
}
