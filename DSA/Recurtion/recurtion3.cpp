#include <bits/stdc++.h>
using namespace std;

class GFG {

public:
    // Check whether the string is palindrom or not.
    bool checkPalindrome(string& s)
    {
        int n = s.size();
        int i = 0, j = n - 1;
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    // Recursive function which takes starting index idx
    // and generates all substrings starting at idx.
    // If substring generated is palindrome it adds to
    // current list and makes a recursive call for
    // remaining  string.
    void Partition(vector<vector<string> >& res, string& s,
                   int idx, vector<string>& curr)
    {
        // If we reach the end of string at the current list
        // to the result.
        if (idx == s.size()) {
            res.push_back(curr);
            return;
        }
        // Stores the current substring.
        string t;
        for (int i = idx; i < s.size(); i++) {
            t.push_back(s[i]);

            // Check whether the string is palindrome is
            // not.
            if (checkPalindrome(t)) {

                // Adds the string to current list
                curr.push_back(t);

                // Recursive call for the remaining string
                Partition(res, s, i + 1, curr);

                // Remove the string from the current
                // string.
                curr.pop_back();
            }
        }
    }
};
// Driver code
int main()
{
    GFG ob;
    // Stores all the partition
    vector<vector<string> > res;
    string s = "geeks";

    // Starting index of string
    int idx = 0;

    // Current list
    vector<string> curr;
    ob.Partition(res, s, idx, curr);
    for (auto& v : res) {
        for (auto& it : v) {
            cout << it << " ";
        }
        cout << "\n";
    }
    return 0;
}
