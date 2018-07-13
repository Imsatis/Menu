#include<iostream>

using namespace std;


/**** Gotoxy Function ****/

   void gotoxy(int x,int y)
 {
      for(int m=1;m<=y;m++)  //vertical Line;
     
     {
         cout<<"\n";
	
           }

       for(int l=1;l<=x;l++)  //Horinzontal Line;
      
      {
         cout<<" ";

           }
	   
    }  
    
