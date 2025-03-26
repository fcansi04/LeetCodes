class MinStack {
    
  private:
   std::stack<int> myStack;  
   std::stack<int> minStack;
   int min=99999;
  public:
  MinStack() {
     
  }
  
  void push(int val) {
      if(val<min){
        min=val;
        minStack.push(min);
      };

      myStack.push(val);
  }
  
  void pop() {
      if(myStack.empty()){
          return;
      }
      if(minStack.top()==myStack.top()){
          minStack.pop();
      }
      myStack.pop();
  }
  
  int top() {
      return myStack.top();
  }
  
  int getMin() {
      return minStack.top();
  }
};

/**
* Your MinStack object will be instantiated and called as such:
* MinStack* obj = new MinStack();
* obj->push(val);
* obj->pop();
* int param_3 = obj->top();
* int param_4 = obj->getMin();
*/