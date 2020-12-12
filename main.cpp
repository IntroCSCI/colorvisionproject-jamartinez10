#include <iostream>
using namespace std;
#include "libraries/bitmap.h"
#include <fstream>
#include "color.cpp"


int main()
{
 int red, green, blue;
 string majorColor, userResponse, repeat, mostProblematicColor;
 fstream reader;
 void getColors (int&, int&, int&);
 void getMajorColor(int, int, int, string&);
 string findMostProblematic(vector <string>);
 vector <string> problematicColors; 
 color ran;

 cout<<("What is your name\n");
 cin>>userResponse;
 reader.open("UserFile", ios::out );
 if (reader.is_open())
  reader<< userResponse <<" ";
 reader.close();
 cout<<("\nPlease enter the rgb values for your color\n\n");

 do{
   getColors(red, green, blue);
   getMajorColor(red, green, blue, majorColor);
    cout<<"\nThis color is primarily "<<majorColor<<" if you see a different color then you might have trouble with it."<<endl;
    do{
     cout<<"Do you have trouble looking at this color?\n";
     cin>>userResponse;
    }while (userResponse!="yes" && userResponse!="no");

 //the following statements inputs whether the user has trouble with a specific color or not on the file UserFile. 
 if (userResponse=="yes"){
   reader.open("UserFile", ios::app );
   if(reader.is_open()){
    reader<<("has trouble with color with values\n Red: ");
    reader<<red;
    reader<<"\n Green: ";
    reader<<green;
    reader<<"\n Blue: ";
    reader<<blue<<endl;
    reader.close();
   }
   problematicColors.push_back(majorColor);
 }
 else{
   reader.open("UserFile", ios::app );
   if(reader.is_open()){
    reader<<("doesn't have trouble with color with values\n Red: ");
    reader<<red;
    reader<<"\n Green: ";
    reader<<green;
    reader<<"\n Blue: ";
    reader<<blue<<endl;
    reader.close();
   }
 }
 cout<<"\nDo you want to enter another color?\n";
 cin>>repeat;
}while(repeat=="yes");

mostProblematicColor=findMostProblematic(problematicColors);
cout<<"The user tends to have more trouble with colors that contain more "<<mostProblematicColor<<endl; 

//outputs specific instructions for the user depending on the data gathered in this program
if(mostProblematicColor.find("red")!= -1)
 cout<<"Open the second picture in the potential colors folder on the left side of your screen, if you don't see a color that is primarily red then you for sure struggle with red colors"<<endl;
if(mostProblematicColor.find("green")!= -1)
 cout<<"Open the first picture in the potential colors folder on the left side of your screen, if you don't see a color that is primarily green then you for sure struggle with green colors"<<endl;
if(mostProblematicColor.find("blue")!= -1)
 cout<<"Open the third picture in the potential colors folder on the left side of your screen, if you don't see a color that is primarily blue then you for sure struggle with blue colors"<<endl;


do{
  cout<<"If you struggled with a specific color enter the rgb values of that color. Hint: you can look at the file UserFile in order to review what colors you struggled with";

  getColors(red, green, blue);
  ran.toHex(red, green, blue);


  cout<<"\nDo you want to enter another color?\n";
  cin>>repeat;
}while(repeat=="yes");

 return 0;
}

//gets the user input for the rgb values
void getColors (int & r, int & g, int & b){
  do{
   cout<<"Enter a Red value between 0 to 255\n";
   cin>>r;
 }while(r<0 || r>255);
 do{
   cout<<"Enter a Green value between 0 to 255\n";
   cin>>g;
 }while(g<0 || g>255);
 do{
   cout<<"Enter a Blue value between 0 to 255\n";
   cin>>b;
 }while(b<0 || b>255);
}

//takes in three values and figures out which one is predominant
void getMajorColor(int r, int g, int b, string & mainColor){
if(r>g && r>b)
 {
   mainColor= "red"; 
 }
 else if (g>b  && g>r)
 {
   mainColor= "green";
 }
 else if(b>r && b>g)
 {
   mainColor= "blue";
 }
else if(r==g && g==b)
 mainColor= "red, green and blue";
 else if (r==b)
 mainColor="red and blue";
 else if (r==g)
 mainColor="red and green";
 else if (g==b)
 mainColor="green and blue";


}

// Figure out which color is more problematic
string findMostProblematic(vector <string> x)
{
 string color;
 int r=0;
 int g=0;
 int b=0;
 for(int i=0; i <x.size(); i++){
 if(x[i].find("red")!= -1)
  r++;
 if(x[i].find("green")!= -1)
  g++;
 if(x[i].find("blue")!= -1)
  b++;
}
getMajorColor(r, g, b, color);
return color;
 
}