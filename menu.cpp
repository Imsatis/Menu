#include<iostream>
#include<conio.h>
#include<stdlib.h>



int load(); 
void home();
void jump(char);


using namespace std;
int main()

 {
   load();
   system("cls");
   char jmp;
    
   home();  //calling Home page
   cin>>jmp;
   
   jump(jmp);
}


     int load()   //Loading...
   {  
      int l,m;
      system("cls");
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tLOADING";
       
	for( l=1;l<=4;l++)
	   { cout<<".";
	       } 
	       
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
