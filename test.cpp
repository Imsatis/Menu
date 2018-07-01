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
	int no=0;
	no++;
	cout<<"\nfinish"<<no;                                                                                                                                                                                                                                                     }
      
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
       cout<<"\n2nd"<<life.me;
       years--;
       if(years==0)
      {
      int co=0;
      co++;
      cout<<"\n"<<co;
      yrs=false;
        }
     }

     getch();
 } 

  
