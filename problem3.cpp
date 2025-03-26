class Solution {
  public:
      int longestValidParentheses(string s) {
          std::stack<char> st;
          int m=0;
          int length=0;
          for(char c:s){
              if(c=='('){
                 st.push('(');
                 m++;
                 
              }else if(c==')'&& !st.empty() && m>=0){
                  st.pop();
                  length++;
                  m--;
                  
              }
  
          }
          return 2*length;
      }
  };