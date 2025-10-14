class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> st;
    for (int a : asteroids) {
        bool alive = true;
        // Collision only possible if a < 0 and stack top > 0
        while (alive && !st.empty() && st.top() > 0 && a < 0) {
            if (st.top() < -a) {
                st.pop();
                continue;
            } else if (st.top() == -a) {
                st.pop();
            }
            alive = false;
        }
        if (alive) st.push(a); // Only push survivor
    }
    vector<int> result;
    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

};