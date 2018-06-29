#include<iostream>
#include<conio.h>

using namespace std;
 

    int main()

{
                 
   int count=1; 
   char chk=27;
  
   string a,b,c,d;

     for (int o=0;o<1;o++)
     {
       
       if(count==1)
       { 
         getline(cin,a);
	 count++;
          if(a==chk)        //error
	    break;
           
          }
        if(count==2)
       { 
         getline(cin,b);
	 count++;
          if(b==chk)
	  break;


	 }
  
       if(count==3)
       { 
         getline(cin,c);
        
	 count++;
          if(c==chk)
	  break;
 
	 }
    

        if(count==4)
       { 
         getline(cin,d);
	 count++;
         if(d==chk)
	  break;


          }
       }

      cout<<"a"<<a<<"\nb"<<b<<"\nc"<<c<<"\nd"<<d<<"\ncount "<<count; 
       getch();
   return 0;

}    

