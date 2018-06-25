#include<iostream>
using namespace std;
#include "student.cpp"
#include "student.h"
int main ()
{
  student X;
  student Y(X);
  X.addcourse("BSCS 403");
  X.addcourse("BSCS 405");
  X.addcourse("BSCS 407");
  X.addcourse("BSCS 409");
  X.addcourse("BSCS 411");
  X.addcourse("BSCS 413");
  Y=X;
  Y.display();
  system("pause");


};
