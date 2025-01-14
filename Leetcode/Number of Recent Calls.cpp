class RecentCounter {
public:
    static queue<int> queue;
    RecentCounter() {
        // Clear the queue for new test cases
        while (!RecentCounter::queue.empty()) { RecentCounter::queue.pop(); }
    }
    
    int ping(int t) {
        int range = t - 3000;
        RecentCounter::queue.push(t);
        int front = RecentCounter::queue.front();
        
        while(!RecentCounter::queue.empty() && !(front >= range && front <= t)) {
            RecentCounter::queue.pop();
            front = RecentCounter::queue.front();
        }

        return RecentCounter::queue.size();
    }
};

// Define the static member outside the class
queue<int> RecentCounter::queue;

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
