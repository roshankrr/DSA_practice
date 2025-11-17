#include <list>
#include <unordered_map>
using namespace std;

class LRUCache {
public:
    int capacity;
    list<pair<int,int>> items; // front = most recent
    unordered_map<int, list<pair<int,int>>::iterator> mp;

    LRUCache(int capacity) : capacity(capacity) {}

    int get(int key) {
        auto it = mp.find(key);
        if (it == mp.end()) return -1;
        // move node to front
        items.splice(items.begin(), items, it->second);
        return it->second->second;
    }

    void put(int key, int value) {
        auto it = mp.find(key);
        if (it != mp.end()) {
            // update and move to front
            it->second->second = value;
            items.splice(items.begin(), items, it->second);
            return;
        }
        // insert new at front
        items.emplace_front(key, value);
        mp[key] = items.begin();

        if ((int)items.size() > capacity) {
            auto last = items.end(); --last;
            mp.erase(last->first);
            items.pop_back();
        }
    }
};
