class Solution {
public:
    int calculate(string s) {
        stack<int> S;
        char op = '+';
        int num = 0;
        for (int i = 0; i <= s.size(); ++ i) {
            if (isdigit(s[i])) num = num * 10 + (s[i] - '0');
            else if (isspace(s[i])) continue;
            else {
                switch (op) {
                    case '+': S.push(num); break;
                    case '-': S.push(-num); break;
                    case '*': num *= S.top(); S.pop(); S.push(num); break;
                    case '/': num = S.top() / num; S.pop(); S.push(num); break;

                }
                num = 0; // num归0
                op = s[i];
            }
        }

        int res = 0;
        while (!S.empty()) {
            res += S.top();
            S.pop();
        }

        return res;
    }
};
