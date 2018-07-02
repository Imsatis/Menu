#include<iostream>
#include<conio.h>
void hell();

using namespace std;

class my
{  
   int me;
  // bool life;

   public:
    my(int godgift)
   {
     me=godgift;
     
     } 
     
   void body(bool life,int death)
   { 
        
     while(life)
     {  
        me++;
	cout<<"\n"<<me;

      if(me==death)
      {
        life=false; 
	hell();

	}

       }
    }
 };    

   int main()
 {
     my life(0);
     life.body(true,1000);

    
     getch();
 } 

 void hell()
 {
   cout<<"\nhell";
    }
