//  Given a string S
// . Print number of times that "EGYPT" word can be formed from S
// 's characters.

// Note: Case of the letters doesn't matter. For example: "Egypt", "egypt" and "eGyPt" are the same.

// Input
// Only one line contains a string S(1≤|S|≤106)
//  where |S| is the length of the string and it consists of lowercase and uppercase English letters.

// Output
// Print the answer required above.

// Examples
// InputCopy
// EgYpTaz
// OutputCopy
// 1
// InputCopy
// pemigdbeigyypetet
// OutputCopy
// 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int e = 0, g = 0, y = 0, p = 0, t = 0;

    
    for (char c : s)
    {
        c = toupper(c);

        if (c == 'E')
            e++;
        else if (c == 'G')
            g++;
        else if (c == 'Y')
            y++;
        else if (c == 'P')
            p++;
        else if (c == 'T')
            t++;
    };

    int result = min({e, g, y, p, t});

    cout << result << endl;
    return 0;
}