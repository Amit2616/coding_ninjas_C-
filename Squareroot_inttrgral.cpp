//method-1: include math.h and use sqrt function directly
/*#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int n,s;
    cin>>n;
    s=sqrt(n);
    cout<<s;
}*/
//method-2: create function for squaroot
#include<iostream>
using namespace std;
int root(int x){
    int i=1;
    while(1){
        if(i*i>x){
            return i-1;
        }
        i++;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<root(n)<<endl;
}