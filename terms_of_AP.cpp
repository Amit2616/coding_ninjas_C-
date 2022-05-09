//Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
#include<iostream>
using namespace std;

int main(){
    int n,c;
    cin>>n;
    for(int i=1; i<=n; i++){
        int c=(3*i)+2;
        if(c%4==0){
            n++;
            continue;
        }
        cout<<c<<" ";
    }
}