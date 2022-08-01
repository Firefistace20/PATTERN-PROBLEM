

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    //reversing the digit of a number 
    int rev=0;
    while (n!=0){
        int last=n%10;
        rev=rev*10+ last;
        n/=10;
    }
    std::cout << rev << std::endl;

    return 0;
}
