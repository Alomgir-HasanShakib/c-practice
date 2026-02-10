#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    string s;

    cin >> x;

// এখানে cin.ingore() Function টা মুলত ট্যাব থাকলে সেগুলোকে remove বা ignore এর কাজ করতেছে।
    cin.ignore();

    getline(cin, s);

    cout << x << endl;
    cout << s << endl;
    return 0;
}