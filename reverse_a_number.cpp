#include<iostream>
using namespace std;

int main(){
	// Write your code here
    int n,rev=0;
    cin>>n;
    while(n>0){
      rev=rev*10+n%10;
      n=n/10;   
}
cout<<rev;
} 
