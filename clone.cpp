/////////////////////Menu Project Clone.............;

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<gotoxy.h>

////////////////////////

  //using namespace std;          //*RECURSION TESTED....


                       //**Tomorrow work is to make a logic recursion free code

  class HOME {


 public:


  	void welcome() {                           // 1st Interface

      system("cls");      
     
      gotoxy(32,15);                         
                                              //must for home              
      cout<<"WELCOME...";

      gotoxy(0,15);                       

      cout<<"press any key to continue...";
	       
      getch();

      home();cout<<"hello";getch();
	
      }

      /******************* Home Function ********************/

 
     void home() {

     int jump; 
    
     do {

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



     
    cin>>jump;

    switch(jump) {
    
    case 1:
    menu();                            //must for menu
    break;

    case 2:
    cout<<"collection";
    break;                            ///do while

    /*default:
    gotoxy(32,1);
    cout<<"INVALID";
    break;*/
       }
       if (jump!=0)
        cout<<"loop";
     }while(jump!=0); 
   }


     void menu() {
    
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

    

    int jump;

    cin>>jump;

    switch(jump)
   {
    case 1:
    //chinese();
    break;

    case 2:
    system("cls");
    cout<<"INDIAN";
    break;

    case 3:
    system("cls");
    cout<<"CONTINENTAL";
    break;

    case 4:
    system("cls");
    cout<<"BEVERAGES";
    break;

    case 5:
    system("cls");
    cout<<"SOUPS";
    break;

    case 0:
    home();
    break;
    	   
    default:
    gotoxy(32,1);
    //cout<<"INVALID";
    menu();
                      
    break;
       } cout<<"test";getch();
     }  

     
  };

     
    
        class CHINESE :public HOME  {

     /********************* Chinese Function ********************/
 
      void chinese_disp()                    
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
    gotoxy(35,2);
    cout<<"INVALID";
    getch();
    //chinese();
    break;
    
     }  
   }
};


     int main() {

     	HOME test;
     	test.welcome();
     }