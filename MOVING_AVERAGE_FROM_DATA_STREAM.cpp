class MovingAverage {
public:
    int windowSize;
    queue<int> q;
    int currentSum;
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        windowSize = size;
        currentSum = 0;
    }
    
    double next(int val) {
        if(q.size()>=windowSize){
            currentSum = currentSum - q.front() + val;
            q.pop();
            q.push(val);
        }
        else{
            currentSum = currentSum + val;
            q.push(val);
        }
        return ((currentSum*1.0)/q.size());
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param_1 = obj.next(val);
 */