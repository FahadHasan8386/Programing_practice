#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Solution {
public:
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int> st;
        queue<int> ret;

        // Push the first k elements into the stack
        while(k--) {
            st.push(q.front());
            q.pop();
        }

        // Enqueue the elements from the stack back to the queue
        while(!st.empty()) {
            ret.push(st.top());
            st.pop();
        }

        // Add the remaining elements of the original queue to the new queue
        while(!q.empty()) {
            ret.push(q.front());
            q.pop();
        }

        return ret;
    }
};

int main() {
    int t;
    cin >> t;

    while(t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;

        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            q.push(a);
        }

        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);

        while(!ans.empty()) {
            cout << ans.front() << " ";
            ans.pop();
        }
        cout << endl;
    }

    return 0;
}
