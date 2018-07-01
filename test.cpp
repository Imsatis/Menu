#include<iostream>
#include<conio.h>

using namespace std;

class my
{  
   public:
   int me;
    my(int skill)
   {
     me=skill;
     
     } 
     
   void body(bool life,int loop)
   { 
    
     
     while(life)
     {  
        me++; 
      cout<<"\n"<<me;	
      if(me==loop)
      {
        life=false; 
	}
      
       }
    }
 };    

   int main()
 {
     my life(0);
     int years=2;
     bool yrs=true;
    
    while (yrs)
    {
       life.body(yrs,years);
       
       years--;
       if(years==0)
      {
      yrs=false;
        }
     }

     getch();
 } 

  
