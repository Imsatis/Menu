/*******************************************************************************************************************************************************************************************

                                  /  Menu Project  \

*******************************************************************************************************************************************************************************************/


#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<gotoxy.h>


void load();         
void home();              //Function Prototype;
void jump(char);


using namespace std;

/***** Main Function *****/

int main()

 {
   char jmp;            // Decliaration Var for JUmp one page to another; 
  
   load();               // Function Calling Load 1st Interface
   
   system("cls");
     
   home();             // calling Home page 2nd Interface
   
   cin>>jmp;          // User Input;
   
   jump(jmp);        // Calling Function Jump Throwing jump Value; 
}


 /***** Load Function *****/

     void load()               // 1st Interface
   {  

      system("cls");      
     
      gotoxy(32,15);       //Header Function Calling 
      
      cout<<"LOADING...";

      gotoxy(0,15);       //Header Function Calling 

      cout<<"press any key to continue...";
	       
        getch();
	
      }

     void home()
   { 
     
     char d1=177,lf=10,si=15;
     int i;

     cout<<lf;
   for(i=0;i<80;i++)
  { 
    cout<<d1; 
     }

  cout<<"\n\t\t\t\t"<<si<<"MENU"<<si<<lf<<lf;

   for(i=0;i<80;i++)
  {
    cout<<d1;  

     }
   //Now Menu Middle Part;

   cout<<lf<<lf<<"ITEMS\n\n";
   cout<<"1.Non-Vegetarian\n";
   cout<<"2.Vegetarian\n";
   cout<<"3.Beverages\n";
   cout<<"4.Soups\n";
   cout<<"5.Continental\n";
        }

 

 void jump(char jmp)
 {
    switch(jmp)
  {
    case '1':
    system("cls");
    cout<<"New page";
    break;
 
 }

 jmp=getch();
 switch(jmp)
 { 
  case '0':
  system("cls");
  home();
  break;
 } 
     }
