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
            new_s.insert(new_s.begin(), stack.top());
            stack.pop();
        }
        
        return new_s;
    }
};