#include<iostream>
using namespace std;
int main(){
  string str;
  boll flag=true;
  int len=str.len();
  for(int i=0;i<len/2;i++){
    if(str[i]!=str[len-1-i])
      flag=false;
    break;
  }
  if(flag==false)
    cout<<"Not a palindrome"<<endl;
  else
    cout<<"given string is not a palindrome"<<endl;
}
  
