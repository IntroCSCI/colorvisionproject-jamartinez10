#include <iostream>
using namespace std;
#include "libraries/bitmap.h"
#include <fstream>

int main()
{
 int red, green, blue;
 string majorColor, userResponse, repeat;
 fstream reader;


 cout<<("What is your name\n");
 cin>>userResponse;
 reader.open("UserFile", ios::out );
 reader<<(userResponse)<<" ";
 reader.close();
 cout<<("\nPlease open up the potential colors folder and pick from those colors to answer the following questions\n\n");

do{
 do{
   cout<<"Enter a Red value between 0 to 255\n";
   cin>>red;
 }while(red<0 || red>255);
 do{
   cout<<"Enter a Green value between 0 to 255\n";
   cin>>green;
 }while(green<0 || green>255);
 do{
   cout<<"Enter a Blue value between 0 to 255\n";
   cin>>blue;
 }while(blue<0 || blue>255);

 if(red>green)
 {
   majorColor= "red"; 
 }
 else if (green>blue)
 {
   majorColor= "green";
 }
 else
 {
   majorColor= "blue";
 }
 cout<<"\nThis color is primarily "<<majorColor<<" if you see a different color then you might have trouble with it."<<endl;


 do{
   cout<<"Do you have trouble looking at this color?\n";
   cin>>userResponse;
 }while (userResponse!="yes" && userResponse!="no");
 
 if (userResponse=="yes")
 {
   reader.open("UserFile", ios::app );
   reader<<("has trouble with color with values\n Red: ");
   reader<<red;
   reader<<"\n Green: ";
   reader<<green;
   reader<<"\n Blue: ";
   reader<<blue<<endl;
   reader.close();
 }
 else
 {
   reader.open("UserFile", ios::app );
   reader<<(" doesn't have trouble with color with values\n Red: ");
   reader<<red;
   reader<<"\n Green: ";
   reader<<green;
   reader<<"\n Blue: ";
   reader<<blue<<endl<<endl;
   reader.close();
 }
 
   cout<<"\nDo you want to enter another color?\n";
   cin>>repeat;
 
 
}while(repeat=="yes");

 return 0;

}
