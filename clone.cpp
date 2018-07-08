/////////////////////Menu Project Clone.............;

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<gotoxy.h>


////////////////////////

  //using namespace std;          //*RECURSION TESTED....


                       //**Tomorrow work is to make a logic recursion free code
     


      class DATA {



      }; 

      class COMMON {

      public:

        int nonveg_disp() {
        int jump;

  do { 
       system("cls");

       gotoxy(30,10); 
       cout<<"1.Non-Vegetarian";
       
       gotoxy(30,1);
       cout<<"2.Vegetarian";

       gotoxy(30,1);
       cout<<"0.BACK";   
      
       gotoxy(30,3);
       cout<<"SELECT ANY OPTION  ";
   
    cin>>jump;

    if (jump==1) {
      return 1;
    }
    if (jump==2) {
      return 2;
    }
    /**
    switch(jump)
  {
    case 1:
       system("cls");          
       cout<<"Non-Veg";
       return "Non-Veg";
    break;

    case 2:
       system("cls");
       cout<<"Veg";
       return "Veg";
    break;

    default:
    gotoxy(35,2);
    cout<<"INVALID";
    getch();
    //chinese();
    break;
    
      }**/
     }while(jump!=0); 
    }
  };   



        class CHINESE :public COMMON{

     /********************* Chinese Function ********************/
 
      public:

        int value;

           void chinese_disp() {

        value=nonveg_disp();
        cout<<value;getch();

      }
};

class MENU :public CHINESE {
    
    public:

     void menu() {

     int jump;

      do {
    
    system("cls");

    gotoxy(32,10);
    cout<<"1.CHINESE";
    
    gotoxy(32,1);
    cout<<"2.INDIAN";                //CURRENT 3RD INTERFACE
   
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

    

    

    cin>>jump;

    switch(jump)
   {
    case 1:
    chinese_disp();
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
                                          //END OF 3rd INTERFACE
       } if (jump==0){cout<<"break";getch();}
      
        else {cout<<"loop menu";getch();}
      }while(jump!=0);
    }  
  };



class HOME :public MENU {


 public:


    void welcome() {                           // 1st Interface

      system("cls");      
     
      gotoxy(32,15);                         
                                              //must for home              
      cout<<"WELCOME...";

      gotoxy(0,15);                       

      cout<<"press any key to continue...";
         
      getch();

      home_disp();cout<<"hello";getch();         
  
      }

      /******************* Home Function ********************/

 
     void home_disp() {

     int jump; 
    
     do {                        //2nd INTERFACE

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
       if (jump!=0) {                   //END OF 2nd INTERFAEE 
        cout<<"loop home";getch();}
       else {
        cout<<"break";getch();}
     }while(jump!=0);                
   }
 };


     int main() {

     	HOME test;
     	test.welcome();
     }