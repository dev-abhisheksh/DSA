#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isVowel(char ch)
{
    string vowels = "aeiou";
    for (int i = 0; i < vowels.size(); i++)
    {
        if (ch == vowels[i])
        {
            return true;
        }
    }
    return false;
}

int maximumNumberOfVowelsOfLengthK(string &s, int k)
{
    int n = s.size();
    int ans = INT_MIN;
    int low = 0;
    int vowelCount = 0;

    for (int high = 0; high < n; high++)
    {
        if (isVowel(s[high]))
            vowelCount++;
        while (high - low + 1 > k)
        {
            if(isVowel(s[low]))vowelCount--;
            low++;
        }
        ans = max(ans, vowelCount);
    }
    return ans;
}

int main()
{
    string s = "abciiidef";
    cout << maximumNumberOfVowelsOfLengthK(s, 3);
    return 0;
}