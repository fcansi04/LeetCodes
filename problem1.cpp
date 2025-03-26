#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
  public:
      bool isValid(string s) {
          std::vector<char> myStack;
  
          for(char c:s){
              if(c=='(' || c=='{'|| c=='[' ){
                  myStack.push_back(c);
              }else if(c=='}' || c==')'|| c==']' ){
                  if(myStack.empty()){
                      return false;
                  }else if
                  (std::string(1,myStack.back())+std::string(1,c)=="[]"
                   ||std::string(1,myStack.back())+std::string(1,c)=="()"
                   ||std::string(1,myStack.back())+std::string(1,c)=="{}"){
                   myStack.pop_back();
                  }else{
                      return false;
                  }
                  
              } 
          }
          return myStack.empty();
  
      }
  };