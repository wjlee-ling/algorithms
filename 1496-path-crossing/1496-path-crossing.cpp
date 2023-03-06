class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0, y=0;
        set<pair<int,int>> hist;
        hist.insert({0,0});
        for (auto p:path) {
            if (p == 'N') y++;
            else if (p == 'S') y--;
            else if (p == 'E') x++;
            else if (p == 'W') x--;
            
            if (hist.find({x,y}) != hist.end()) {
                return true;
            } else hist.insert({x,y});
        } return false;
    }
};