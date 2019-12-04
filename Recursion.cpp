#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;

int i(int j)
{
  if (j <= 1)
    return 1;
  else
    return j * i(j - 1);
}

int main() 
{
  int num;
  cout << "Enter a number: " << endl;
  num = validateInt(num);
  cout << "Recursion result: " << i(num);
  return 0;
}