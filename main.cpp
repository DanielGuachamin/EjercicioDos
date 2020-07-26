#include <iostream>
using namespace std;

int sumaN(int a);

int main() {

  cout << sumaN(10);
  return 0;
}

int sumaN(int a)
{
  if (a == 0)
  {
    return 0 ; 
  }
  else 
  {
    return a + sumaN(a - 1);
  }
}