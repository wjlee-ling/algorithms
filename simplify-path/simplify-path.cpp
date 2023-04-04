class Solution {
public:
    string simplifyPath(string path) {
    string ans;
    
    int start = 0, end = 0;
    while (end < path.size()) {
        // find next token
        while (end < path.size() && path[end] == '/') {
            end++;
        }
        start = end;
        while (end < path.size() && path[end] != '/') {
            end++;
        }
        // process token
        string token = path.substr(start, end - start);
        if (token == "..") {
            // remove last directory from answer
            if (!ans.empty()) {
                int pos = ans.find_last_of('/');
                ans = ans.substr(0, pos);
            }
        } else if (!token.empty() && token != ".") {
            // add directory to answer
            ans += '/' + token;
        }
    }
    
    if (ans.empty()) {
        ans = "/";
    }
    return ans;
}

};