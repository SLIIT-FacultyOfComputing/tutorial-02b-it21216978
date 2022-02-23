
#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = "<< nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long Factorial(int no)
{
  int fac = 1;
  for (int x=no; x >= 1; x--) 
    {
        fac = fac * x;
    }
  return fac;
}


long nCr(int n, int r)
{
  long nCr = Factorial(n)/(Factorial(r) * Factorial(n-r));
 
  return nCr;
}