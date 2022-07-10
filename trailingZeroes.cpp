
#include <iostream>

using namespace std;
int
trailingZeroes (int n)
{
  if (n < 0)
    return -1;
  int res = 0;
  for (int i = 5; n / i >= 1; i = i * 5)
    {
      res += n / i;
    }
  return res;
}

int
main ()
{
  //it will calculate the trailing zeroes of the factorial of a given number 

  int res, n = 20;
  res =  trailingZeroes (20);
  cout << "the no of trailing zeroes are " << res << endl;


  return 0;
}
