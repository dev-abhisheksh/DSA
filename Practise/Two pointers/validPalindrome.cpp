#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPalindrome(string &s)
{
    int n = s.size();
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        if (!isalnum(s[left]))
        {
            left++;
        }
        else if (!isalnum(s[right]))
        {
            right--;
        }
        else
        {
            if (tolower(s[left]) == tolower(s[right]))
            {
                left++;
                right--;
            }else return false;
        }
    }

    return true;
}

int main()
{
    string s = "A man, a plan, a cana: Panama";

    cout << isPalindrome(s);

    return 0;
}