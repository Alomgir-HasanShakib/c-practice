// stringstream string ইনপুট নিয়ে সেটাকে word by word separate করে দেয়। যেমন- hello একটা word im একটা word ইত্যাদি।

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; // hello im alomgir hasan shakib
    getline(cin, s);
    cout << s << endl;

    stringstream ss(s);
    string word;

    // ss >> word; // এখানে stringstream word string এর মধ্যে  hello return করবে।
    // cout << word << endl;

    // ss >> word; // এখানে আবার im return করবে
    // cout << word << endl;

    // এখন word by word print করতে হলে একটা লুপ চালালেই হচ্ছে।
    while (ss >> word)
    {
        cout << word << endl;
    }
    return 0;
}