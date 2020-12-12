#include "color.h"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>

using std::cout;
using std::string;
using std::vector;

 string color:: toHex (int num1, int num2, int num3){
   string hexVal="";
   int temp;
   r=num1;
   g=num2;
   b=num3;
   
   temp=r;
   for(int i=0; i<2; i++){
    temp=temp/16;
    if(temp<10)
      hexVal+= std::to_string(temp);
    else if (temp==10)
      hexVal+='A';
    else if (temp==11)
      hexVal+='B';
    else if (temp==12)
      hexVal+='C';
    else if (temp==13)
      hexVal+='D';
    else if (temp==14)
      hexVal+='E';
    temp=((r%16)*16);

 }
   temp=g; 
   for(int i=0; i<2; i++){
    temp=temp/16;
    if(temp<10)
      hexVal+= std::to_string(temp);
    else if (temp==10)
      hexVal+='A';
    else if (temp==11)
      hexVal+='B';
    else if (temp==12)
      hexVal+='C';
    else if (temp==13)
      hexVal+='D';
    else if (temp==14)
      hexVal+='E';
    temp=((g%16)*16);
   }

   temp=b;
   for(int i=0; i<2; i++){
    temp=temp/16;
    if(temp<10)
      hexVal+= std::to_string(temp);
    else if (temp==10)
      hexVal+='A';
    else if (temp==11)
      hexVal+='B';
    else if (temp==12)
      hexVal+='C';
    else if (temp==13)
      hexVal+='D';
    else if (temp==14)
      hexVal+='E';
    temp=((b%16)*16);
   }

   color::hexVals.push_back(hexVal);
   return hexVal;

 }
 void color::findInFile(string x){
   string temp="";
   std::fstream reader;
   reader.open("HexFinder", std::ios::in);

   if(reader.fail())
    {
    cout << "Could not open file.\n";      
    }
    else
    {
      while(reader.eof()==false)
      {
       getline(reader, temp);

       cout<< temp.find(x);
      temp.find(x);
      }
    }
 }