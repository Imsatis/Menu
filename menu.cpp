/*******************************************************************************************************************************************************************************************

                                  /  Menu Project  \

*******************************************************************************************************************************************************************************************/


#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<gotoxy.h>


void load();         
void home();              //Function Prototype;
void home_switch();


using namespace std;

/***** Main Function *****/

int main()

 {
  
   load();               // Function Calling Load 1st Interface
     
   home();             // calling Home page 2nd Interface
   
   home_switch();        // Calling Function Jump Throwing jump Value; 
}


 /***** Load Function *****/

     void load()               // 1st Interface
   {  

      system("cls");      
     
      gotoxy(32,15);       //Header Function Calling 
      
      cout<<"WELCOME...";

      gotoxy(0,15);       //Header Function Calling 

      cout<<"press any key to continue...";
	       
        getch();
	
      }

     void home()
   { 
     system("cls");

     char d1=177,lf=10,si=15;
     int i;

     cout<<lf;
   for(i=0;i<80;i++)
  { 
    cout<<d1; 
     }
      gotoxy(33,1);   
      cout<<si<<"SERVICE"<<si<<lf<<lf;	 
 

   for(i=0;i<80;i++)
  {
    cout<<d1;  

     }
           

    gotoxy(32,2);
    cout<<"1.CHINESE";
    
    gotoxy(32,1);
    cout<<"2.INDIAN";
   
    gotoxy(32,1);
    cout<<"3.CONTINENTAL";

    gotoxy(32,1);
    cout<<"4.BEVERAGES";
    
    gotoxy(32,1);
    cout<<"5.SOUPS";
    
    gotoxy(32,1);
    cout<<"6.COLLECTION";
   
    gotoxy(32,1);
    cout<<"0.EXIT";
   
    gotoxy(29,3);
    cout<<"SELECT ANY OPTION  ";


	}     

 

 void home_switch()
 {  
    char jump;

    cin>>jump;

    switch(jump)
  {
    case '1':
    system("cls");
    cout<<"CHINESE";
    break;

    case '2':
    system("cls");
    cout<<"INDIAN";
    break;

    case '3':
    system("cls");
    cout<<"CONTINENTAL";
    break;

    case '4':
    system("cls");
    cout<<"BEVERAGES";
    break;

    case '5':
    system("cls");
    cout<<"SOUPS";
    break;

    case '6':
    system("cls");
    cout<<"COLLECTION";
    break;

    case '0':
    system("cls");
    cout<<"EXIT";
    break;

    default:
    gotoxy(32,1);
    cout<<"INVALID";
    break;

 }

 jump=getch();
 switch(jump)
 { 
  case '0':
  system("cls");
  home();
  break;
 } 
     }
