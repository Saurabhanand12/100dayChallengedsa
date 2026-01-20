// class LRUCache {
// public:
//     class node {
//     public:
//         int key, val;
//         node* prev;
//         node* next;

//         node(int k, int v) {
//             key = k;
//             val = v;
//             prev = next = NULL;
//         }
//     };

//     node* head;
//     node* tail;
//     unordered_map<int, node*> m;
//     int limit;

//     LRUCache(int capacity) {
//         limit = capacity;
//         head = new node(-1, -1);
//         tail = new node(-1, -1);
//         head->next = tail;
//         tail->prev = head;
//     }

//     // add node right after head (Most Recently Used)
//     void addnode(node* newnode) {
//         node* temp = head->next;

//         head->next = newnode;
//         newnode->prev = head;

//         newnode->next = temp;
//         temp->prev = newnode;
//     }

//     // remove node from list
//     void delnode(node* oldnode) {
//         node* prevnode = oldnode->prev;
//         node* nextnode = oldnode->next;

//         prevnode->next = nextnode;
//         nextnode->prev = prevnode;
//     }

//     int get(int key) {
//         if(m.find(key) == m.end()) return -1;

//         node* resnode = m[key];
//         int ans = resnode->val;

//         // move to front (MRU)
//         delnode(resnode);
//         addnode(resnode);

//         return ans;
//     }

//     void put(int key, int value) {
//         if(m.find(key) != m.end()) {
//             node* oldnode = m[key];
//             delnode(oldnode);
//             m.erase(key);
//             delete oldnode;
//         }

//         if(m.size() == limit) {
//             node* lru = tail->prev;
//             m.erase(lru->key);
//             delnode(lru);
//             delete lru;
//         }

//         node* newnode = new node(key, value);
//         addnode(newnode);
//         m[key] = newnode;
//     }
// };