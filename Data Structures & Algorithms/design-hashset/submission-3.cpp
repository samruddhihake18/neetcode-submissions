class MyHashSet {
    vector<int>nums;
public:
    MyHashSet() {
    }
    
    void add(int key) {
        if(!contains(key)){
            nums.push_back(key);
        }
        return;
    }
    
    void remove(int key) {
        int idx =-1;
        for(int i =0; i<nums.size(); i++){
            if(nums[i] == key){
                idx = i;
                break;
            }
        }
        if(idx == -1) return;

        for(int i = idx; i<nums.size()-1; i++){
            nums[i] = nums[i+1];
        }
        nums.pop_back();
    }
    
    bool contains(int key) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==key){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */