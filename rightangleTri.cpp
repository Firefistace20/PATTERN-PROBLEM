

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
   for(int i=n;i>=1;i--){
       for(int j=n;j>=1;j--){
           if(j<=i){
               cout<<"*";
           }
           else {
               cout<<" ";
           }
       
       }
       cout<<endl;
   }
   
   /*
   output will be n = 5
   
       * * * * *  
         * * * * 
           * * *  
             * * 
               *

*/
    return 0;
}