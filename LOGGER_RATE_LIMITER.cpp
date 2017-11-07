class Logger {
public:
    map<string,int> log_map;
    int limit = 10;
    /** Initialize your data structure here. */
    Logger() {
        
    }
    
    /** Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. */
    bool shouldPrintMessage(int timestamp, string message) {
        
        if(log_map.find(message)==log_map.end()){
            log_map.insert(make_pair(message,timestamp));
            return true;
        }
        if(timestamp-log_map[message]>=limit)
        {
            log_map[message] = timestamp;
            return true;
        }
        return false;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger obj = new Logger();
 * bool param_1 = obj.shouldPrintMessage(timestamp,message);
 */