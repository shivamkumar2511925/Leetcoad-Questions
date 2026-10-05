
class Solution {
public:
    vector<string> ans;
    void solve(string ip, string op) {
        if (ip.size() == 0) {
            ans.push_back(op);
            return;
        }
        if (isdigit(ip[0])) {
            string op1 = op;
            op1 += ip[0];
            ip.erase(ip.begin());
            solve(ip, op1);
        }
        else {
            string op1 = op;
            op1 += tolower(ip[0]);

            string op2 = op;
            op2 += toupper(ip[0]);

            ip.erase(ip.begin());
            solve(ip, op1);
            solve(ip, op2);
        }
    }

    vector<string> letterCasePermutation(string s) {
        string ip = s;
        string op = "";
        solve(ip, op);
        return ans;
    }
};