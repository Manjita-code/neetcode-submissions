class LRUCache {
public:

    int size;

    // key -> {value, position in list}
    unordered_map<int, pair<int, list<int>::iterator>> mp;

    // Front = Most Recently Used
    // Back  = Least Recently Used
    list<int> lru;

    LRUCache(int capacity) {
        size = capacity;
    }

    int get(int key) {

        if (mp.find(key) == mp.end()) {
            return -1;
        }

        // Get value
        int value = mp[key].first;

        // Remove key from its current position
        lru.erase(mp[key].second);

        // Put key at front because it is recently used
        lru.push_front(key);

        // Update its iterator
        mp[key].second = lru.begin();

        return value;
    }

    void put(int key, int value) {

        // Key already exists
        if (mp.find(key) != mp.end()) {

            // Update value
            mp[key].first = value;

            // Remove old position
            lru.erase(mp[key].second);

            // Put at front
            lru.push_front(key);

            // Update iterator
            mp[key].second = lru.begin();

            return;
        }

        // Cache is full
        if (mp.size() == size) {

            // Last element = Least Recently Used
            int lruKey = lru.back();

            // Remove from map
            mp.erase(lruKey);

            // Remove from list
            lru.pop_back();
        }

        // Insert new key at front
        lru.push_front(key);

        // Store value + iterator
        mp[key] = {value, lru.begin()};
    }
};