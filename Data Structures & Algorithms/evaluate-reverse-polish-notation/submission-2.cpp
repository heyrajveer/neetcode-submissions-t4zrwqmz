class Solution {
public:
    int operation(int a, int b, string token) {
        if (token == "+") return a + b;
        if (token == "-") return a - b;
        if (token == "*") return a * b;
        if (token == "/") return a / b;
        return 0; 
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto &token : tokens) { 
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                int result = operation(b, a, token);
                st.push(result);
            } else {
                st.push(stoi(token)); 
            }
        }
        return st.top();
    }
};

