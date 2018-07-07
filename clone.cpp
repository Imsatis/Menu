/////////////////////Menu Project Clone.............;

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<gotoxy.h>

////////////////////////


  class test {



  public:

  	void welcome() {                           // 1st Interface

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


	    /******************** Home Switch Function ********************/

 void home_switch() {  
    
    char jump;
    cin>>jump;

    switch(jump) {
    
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

  };


 int menu() {}