#include <bits/stdc++.h>
using namespace std;
 bool isoperand(char x)
    {
        return (x>='a' && x<='z') || (x>='A' && x<='Z');
    }
string getinfix(string exp){
    stack<string> s;
    for(int i=0;i<exp.size();i++){
        if(isoperand(exp[i])){
            string op(1,exp[i]);
            s.push(op);
        }
        else{
            string op1=s.top();
            s.pop();
            string op2=s.top();
            s.pop();
            s.push("("+op2+exp[i]+op1+")");
        }
    }
    return s.top();
}

int main(){
   
      string exp="ab*c+";
      cout<<getinfix(exp);
      return 0;

    }
