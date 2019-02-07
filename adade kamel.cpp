#include <iostream>
#include <conio.h>
using namespace std;
int main(){
 int num,sum=0;
    cin>>num;
    for(int i=1; i<num; i++){
        if(num%i==0)
            sum+=i;
    if(sum==num)
        cout<<"Adad shoma kamel ast";
    else
        cout<<"Adad shoma kamel nist";
    }
     
    return 0;
}

