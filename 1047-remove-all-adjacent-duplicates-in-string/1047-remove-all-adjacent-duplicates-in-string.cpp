class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stack;
        for (const auto& ch:s) {
            if (stack.empty() || stack.top() != ch) stack.push(ch);
            else if (stack.top() == ch) stack.pop();
        }
        string new_s;
        new_s.reserve(stack.size());
        while (! stack.empty()) {
            new_s.push_back(stack.top());
            stack.pop();
        }
        reverse(new_s.begin(), new_s.end());
        
        return new_s;
    }
};