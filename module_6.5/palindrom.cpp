// Given a string S. Determine whether S is Palindrome or not

// Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

// Output
// Print "YES" if the string is palindrome, otherwise print "NO".

// Examples
// InputCopy
// abba
// OutputCopy
// YES
// InputCopy
// icpcassiut
// OutputCopy
// NO
// InputCopy
// mam
// OutputCopy
// YES

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    string rev = s;

    reverse(rev.begin(), rev.end());

    if (s == rev)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    // this is the best way to understand how reverse function work and this method loved by interviewers.
    int i = 0;
    int j = s.size() - 1;
    bool isPalindrom = true;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            isPalindrom = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrom)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}