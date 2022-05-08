#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
  char n;
   // n=cin.get();
    int count = 0, alp=0, dig=0, sp=-1;
    while(n !='$'){
       // count++;
        n=cin.get();
    if(n>=97 && n<=122){
        alp++;
    }
    else if(n>=48 && n<=57){
        dig++;
    }
    else{
        sp++;
    }    
    }
    cout<<alp<<" "<<dig<<" "<<sp;
}
