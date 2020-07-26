#include <iostream>
using namespace std;

int sumaN(int a);

int main() {

  cout << sumaN(10);
  return 0;
}
// Ahora un cambio diferente que no se verá en la rama master
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