#include <iostream>
using namespace std;

int main(){
  bool isPrime(int a);
  int N,i=0,num=0;

while(1){
	cin>>N;
	if(isPrime(N))cout<<"yes"<<endl;
	else break;
}

}

 bool isPrime(int a){
   if(a==1)return false;
   else if(a==2)return true;
   else{
    for(int i=3;i*i<=a;i+=2){
      if(a%i==0)return false;
      }
      return true;
  }
  }
