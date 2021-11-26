#include<bits/stdc++.h>
using namespace std;
int main(){
 string s;
 cin>>s;
 int count=0;
 int cnt=0;
 int result=0;
      for(int i=0;i<s.size();i++){
          char x=s[i];
          if(isupper(x))
          count++;
          if(islower(x))
          cnt++; 
      }
       for(int i=0;i<s.size();i++){
       if(count>cnt){
              s[i]=s[i]&'_';
          }
         
          else{
              s[i]=s[i]|' ';
          }
       }
       cout<<s;
   
}