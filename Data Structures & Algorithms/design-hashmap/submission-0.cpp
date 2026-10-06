class MyHashMap {
public:
    MyHashMap() {}
    
    vector<pair<int,int>>nums;

    void put(int key, int value) {
        for(int i=0; i< nums.size(); i++){
            if(nums[i].first ==key){
                nums[i].first = key;
                nums[i].second = value;
                return;
            }
        }
        nums.push_back({key,value});
    }
    
    int get(int key) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i].first == key){
                return nums[i].second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int idx = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i].first == key){
                idx = i;
                break;
            }
        }
        if(idx == -1) return;

        for(int i = idx; i<nums.size()-1; i++){
            nums[i]= nums[i+1];
        }
        nums.pop_back();
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */