#include<iostream>
int main()
{
  int no;
  long fac;

  std::cout<<"Enter a Number :";
  std::cin>>no;

  fac = 1;
  for (int x=no; x >= 1; x--) 
    {
        fac = fac * x;
    }

  std::cout<<"Factorial of "<<no<< "is"<< fac;



  return 0;
}

