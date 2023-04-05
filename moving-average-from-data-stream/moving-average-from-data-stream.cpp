class MovingAverage {
public:
    int n;
    queue<int> q;
    int cumsum = 0; 
    
    MovingAverage(int size) {
        n = size;
    }
    double next(int val) {

        if (q.size()==n) {
            cumsum -= q.front();
            q.pop();
        }
        q.push(val);
        cumsum += val;
        double avg = (double) cumsum / q.size(); 
        return avg;
        
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */