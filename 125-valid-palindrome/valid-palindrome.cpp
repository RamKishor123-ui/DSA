// class Solution {
// public:
//           bool f(int i, string &s, int n) {
//         if (i >= n / 2)
//             return true;

//         if (s[i] != s[n - i - 1])
//             return false;

//         return f(i + 1, s, n);
//     }
            
//     bool isPalindrome(string s) {
//        int n=s.size();
//        return f(0,s,n);
//        }
// };

class Solution {
public:
    bool f(int i, string &s, int n) {
        if (i >= n / 2)
            return true;

        if (s[i] != s[n - i - 1])
            return false;

        return f(i + 1, s, n);
    }

    bool isPalindrome(string s) {
        string temp = "";

        for (char c : s) {
            if (isalnum(c)) {
                temp += tolower(c);
            }
        }

        int n = temp.size();
        return f(0, temp, n);
    }
};