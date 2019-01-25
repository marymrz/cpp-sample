#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	  int n,fact;
     cout<<"Please enter number : "; cin>>n;
          unsigned int result=1;
             for(fact=n;fact>0;fact--)
                    result*=fact;
      cout<<"\nThe factorial of "<<n<<"is = "<<result<<endl;
    return  0;
}
