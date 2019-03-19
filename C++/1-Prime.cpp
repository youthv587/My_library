#include <iostream>
using namespace std;

int main(){
  bool isPrime(int a);
  int N,i=0,num=0;

//无限判断
while(1){
	cin>>N;
	if(isPrime(N))cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	}

}

//函数判断体
 bool isPrime(int a){
   if(a==1)return false;
   else if(a==2)return true;
   else{
    for(int i=2;i*i<=a;i++){
      if(a%i==0)return false;
      }
      return true;
  }
  }
