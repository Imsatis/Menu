/*******************************************************************************************************************************************************************************************

                                    /  Menu Project  \

*******************************************************************************************************************************************************************************************/


                 //tomorrow work is to design chinese properly

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<gotoxy.h>


void welcome();         
void home();              //Function Prototype;
void home_switch();
void menu();
void chinese();
//void chinese_non-veg();
void chinese_switch();
using namespace std;



/******************** Main Function ********************/


int main()

 {
  
   welcome();               // Function Calling welcome 1st Interface
     
   home();                 // calling Home page 2nd Interface
      
}


 /************** Welcome Function *****************/



     void welcome()                             // 1st Interface
   {  

      system("cls");      
     
      gotoxy(32,15);                         
                                                            
      cout<<"WELCOME...";

      gotoxy(0,15);                       

      cout<<"press any key to continue...";
	       
      getch();
	
      }


/******************* Home Function ********************/

 
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
    
    gotoxy(32,1);
    cout<<"1.Menu";

    
    gotoxy(32,1);
    cout<<".COLLECTION";
   
    gotoxy(32,1);
    cout<<"0.EXIT";
   
    gotoxy(29,3);
    cout<<"SELECT ANY OPTION  ";

    home_switch();        // Calling Function Jump Throwing jump Value; 

	}     


       void menu()
  {
    
    system("cls");

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

     

  
        }     



/******************** Home Switch Function ********************/
 

 void home_switch()
 {  
    char jump;

    cin>>jump;

    switch(jump)
  {
    case '1':
    //system("cls");
    //cout<<"CHINESE";
    menu();
    break;

    
    case '0':
    system("cls");
    cout<<"EXIT";
    break;

    default:
    gotoxy(32,1);
    cout<<"INVALID";
    home();                 /**if default control goto home loop process **/
    break;
            }
 }

  /********************* Chinese Function ********************/
 
      void chinese()                    
  { 
       system("cls");

       gotoxy(30,10); 
       cout<<"1.Non-Vegetarian";
       
       gotoxy(30,1);
       cout<<"2.Vegetarian";

       gotoxy(30,1);
       cout<<"0.Go Back To Main Menu";   
      
       gotoxy(30,3);
       cout<<"SELECT ANY OPTION  ";

       chinese_switch();
         
	  }  

     


          
   
    void chinese_switch()
  { 
    int jump;   
    cin>>jump;
    
    switch(jump)
  {
    case 1:
    system("cls");          
    cout<<"Non-Veg";
    break;

    case 2:
    system("cls");
    cout<<"Veg";
    break;

    case 0:
    home();
    break;

    default:
    
    //system("cls");
    
    gotoxy(35,2);
    cout<<"INVALID";

    getch();
    chinese();
    break;
    
     }  

    }

/** jump=getch();
 switch(jump)
 { 
  case '0':
  system("cls");
  cout<<"hellow";
  getch();
  break;
 } 
     }**/



/**

 case '1':
    //system("cls");
    //cout<<"CHINESE";
    chinese();
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
    home();                 //if default control goto home loop process 
    break;
**/
