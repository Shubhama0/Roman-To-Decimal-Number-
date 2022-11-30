// Run in C++ Compiler

#include <iostream>
#include <string>
using namespace std;

   int romanToInt(string s) {
int k,l=s.length();
int t=0;
      for(int i=0;i<l;i++){

if(s[i]=='M'){
t=t+1000;}
if((s[i]=='C' ) && (s[i+1]=='M' )){  
t=t+900;
++i;  }

if(s[i]=='D'){
t=t+500;}
if(s[i]=='C' && s[i+1]=='D'){  
t=t+400;
++i; }

if(s[i]=='C'){
t=t+100;
}
if(s[i]=='X' && s[i+1]=='C'){
t=t+90;
 ++i; }

if(s[i]=='L'){
t=t+50;
}
if(s[i]=='X' && s[i+1]=='L'){
 t=t+40;  
++i;}

if(s[i]=='X'){
t=t+10; 
}
if(s[i]=='I' && s[i+1]=='X'){
 t=t+9; 
++i;}

if(s[i]=='V') {
t=t+5;
}
if(s[i]=='I' && s[i+1]=='V'){
 t=t+4;  
++i; }

if(s[i]=='I') {
t=t+1;
}

     }

return t;
    }

int main (){
	cout<<"✍🏻 Enter ROMAN NUMBER "<<"\n";
	
	string s;
	cin>>s;
cout<<"\n"<<"Decimal NO. is-"<<"\n"<<	"👉🏻"<< romanToInt(s)<<endl;
	
	
}


