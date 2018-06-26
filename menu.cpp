/*******************************************************************************************************************************************************************************************

                                    /  Menu Project  \

*******************************************************************************************************************************************************************************************/


                 //tomorrow work is to non-veg

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<gotoxy.h>


void welcome();         
void home();              //Function Prototype;
void home_switch();
void menu();
void menu_switch();
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
    
    gotoxy(32,5);
    cout<<"1.Menu";

    
    gotoxy(32,1);
    cout<<"2.COLLECTION";
   
    gotoxy(32,1);
    cout<<"0.EXIT";
   
    gotoxy(29,3);
    cout<<"SELECT ANY OPTION  ";

    home_switch();        // Calling Function Jump Throwing jump Value; 

	}     
     
 void home_switch()
 {  
    char jump;

    cin>>jump;

    switch(jump)
  {
    case '1':
    menu();
    break;

    case '2':
    cout<<"collection";
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




/****************** Menu Function ******************/

       void menu()
  {
    
    system("cls");

    gotoxy(32,10);
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
    cout<<"0.MAIN MENU";

    gotoxy(30,3);
    cout<<"SELECT ANY OPTION  ";

    menu_switch();

 
        }    

	
    void menu_switch()
  {
     
    char jump;

    cin>>jump;

    switch(jump)
   {
    case '1':
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

    case '0':
    home();
    break;
    	   
    default:
    gotoxy(32,1);
    cout<<"INVALID";
    home();                 //if default control goto home loop process 
    break;
      }
  

   
   }


/******************** Home Switch Function ********************/
 

  /********************* Chinese Function ********************/
 
      void chinese()                    
  { 
       system("cls");

       gotoxy(30,10); 
       cout<<"1.Non-Vegetarian";
       
       gotoxy(30,1);
       cout<<"2.Vegetarian";

       gotoxy(30,1);
       cout<<"0.BACK";   
      
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
    menu();
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

/***************** NON-VEG Function *******************/
 
// work pending


  __   chinese_non-veg();
{   
       //variable decliaration;

    string 1item,2item,3item,4item,5item,6item,7item,8item,9item,10item,11item,12item,     13item,14item,15item;
    
    cout<<1item;
    cout<<2item;
    cout<<3item; 
    cout<<4item; 
    cout<<5item; 
    cout<<6item;
    cout<<7item;
    cout<<8item;
    cout<<9item;
    cout<<10item;
    cout<<11item; 
    cout<<12item;
    cout<<13item;
    cout<<14item;
    cout<<15item;
   
   non-veg_switch();

    }    

    __  non-veg_switch()
   {
     int jump;
     cin>>jump;

       switch(jump)
     { 
        case 1:
	non-veg_edit();
	break;
       
       }
    }           //work pending  

       non-veg_edit();
    {
       
       
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
     }*/
