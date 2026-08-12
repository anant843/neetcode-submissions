class Solution {
public:
    bool isPalindrome(string s) {

        int i = 0;
        int j = s.length() - 1;

        while(i < j)
        {
            while(i < j && !isalnum(s[i]))
                i++;

            while(i < j && !isalnum(s[j]))
                j--;

            if(tolower(s[i]) != tolower(s[j]))
                return false;

            i++;
            j--;
        }

        return true;
    }
};


// class Solution {
//    public:
//     bool isPalindrome(string s) {
//         for (char& ch : s) {
//             ch = tolower(ch);
//         }
//         string s1 = "";
//         for (auto ch : s) {
//             if (isalpha(ch)) {
//                 s1.push_back(ch);
//             }
//         }
//         string s2 = s1;
//         reverse(s2.begin(), s2.end());
//         return s2 == s1;
//     }
// };

