#include "color.h"
#include <string>
#include <iostream>

using std::cout;
using std::string;
using std::vector;

 void color:: toHex (int num1, int num2, int num3){
   string hexVal;
   int temp;
   r=num1;
   g=num2;
   b=num3;
   
   temp=r/16;
   if(temp<10)
   hexVal=temp;
   else if (temp=10)
   hexVal='A';
   else if (temp=11)
   hexVal='B';
   else if (temp=12)
   hexVal='C';
   else if (temp=13)
   hexVal='D';
   else if (temp=14)
   hexVal='E';




 }