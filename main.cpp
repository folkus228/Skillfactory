#include <iostream>
using namespace std;
bool IsKPeriodic(string text, int k)
{
    if (text.size() % k != 0)
        return false;

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < text.size() / k; ++j) {
            if (text[i + j * k] != text[i])
                return false;
        }
    }
    return true;
}


int main()
{
    string str = "abcabcabcabc";
    int k = 3;

    cout << IsKPeriodic(str, k) << endl;
}
