// Given a string S
// . Print S
//  after replacing every sub-string that is equal to "EGYPT" with space.

// Input
// Only one line contains a string S
//  (1≤|S|≤103)
//  where |S| is the length of the string and it consists of only uppercase English letters.

// Output
// Print the result as required above.

// Examples
// InputCopy
// BRITISHEGYPTGHANA
// OutputCopy
// BRITISH GHANA
// InputCopy
// ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ
// OutputCopy
// ITALYKOREA  ALGERIA Z

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    for (int i = 0; i < s.size();)
    {
        if (i + 4 < s.size() && s.substr(i, 5) == "EGYPT")
        {
            cout << " ";
            i+=5;
        }
        else
        {
            cout << s[i];
            i++;
        }
    }
}