struct node{
    int val;
    int minv;
    node* pre;
    node(int v):val(v), pre(NULL){}
};

class MinStack {
public:
    node* store;
    MinStack(){ store=new node(0x7fffffff); store->minv=0x7fffffff;}

    void push(int x) {
        node *tmp=new node(x);
        tmp->pre=store;
        store=tmp;
        store->minv=min(store->val, store->pre->minv);
    }

    void pop() {
        node *tmp=store;
        store=store->pre;
        delete tmp;
    }

    int top() {
        return store->val;
    }

    int getMin() {
        return store->minv;
    }
};
