#include<iostream>
#include<conio.h>

using namespace std;
 

    int main()

{
   
   int count=1,chk;
  
   string a,b,c,d;

     for (int o=0;o<1;o++)
     {
       
       if(count==1)
       { 
         getline(cin,a);
	 cin>>chk;
	 count++;
	 if(chk==0)
	    break;
          }
        if(count==2)
       { 
         getline(cin,b);
         cin>>chk;
	 count++;
         if(chk==0)
	    break;

	 }
  
       if(count==3)
       { 
         getline(cin,c);
         cin>>chk;
	 count++;
         if(chk==0)
	    break; 
	 }
    

        if(count==4)
       { 
         getline(cin,d);
         cin>>chk;
	 count++;
         if(chk==0)
          break;

          }
       }

      cout"a"<<a<<"\nb"<<b<<"\nc"<<c<<"\nd"<<d; 
       getch();
   return 0;

}    

