#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<string.h>

       ///save error after end the vaiable;


////////pending work is to 
////////1.check errors properly in edit mode;
////////2.delete logic;
////////3.so on;


         //testing for edit environment by user;

using namespace std;

class data {                           //class 

     string a,b,c,d,e,f,g,h,i,j,k,l;
     int count;	

     public:

    //space is terminating the line;       
       data() {

      
      ifstream read_count;
      read_count.open("data.txt");      //udd constructor for reading count value;
      read_count>>count;

      ifstream read_item;
      read_item.open("menu_data.txt");      //udd constructor for reading items;    
     

      a=reading(read_item);
      b=reading(read_item);
      c=reading(read_item);
      d=reading(read_item);
      e=reading(read_item);
      f=reading(read_item);
      g=reading(read_item);
      h=reading(read_item);
      i=reading(read_item);
      j=reading(read_item);
      k=reading(read_item);
      l=reading(read_item);
            
            //>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
         }


        string reading(ifstream &read_item) {

            char ch;
            string temp;

             while((read_item.get(ch)&&ch!='\n')) {

                  temp+=ch;
                  }
               return temp;   
           }

     void save_file() {

     	char want;

      if(count!=13) {
      cout<<"\n\ndo you want to save the data Y/N";
      want=getch();
      
      if(want=='Y'||want=='y') { 
      ofstream save_count("data.txt");
      save_count<<count;

      ofstream save_item("menu_data.txt"); 
      save_item<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f<<"\n"<<g<<"\n"<<h<<"\n"<<i<<"\n"<<j<<"\n"<<k<<"\n"<<l; 

                   }

            show();
           
            }

         else 
        cout<<"\n\n\t\t\t\tStorage is full";
             
      } 



        data(int x) {
      
      ifstream read;
      read.open("menu_data.txt");
      read>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;  //all items 
            
         }

     void save_file(int y) {

      ofstream save("menu_data.txt");
      //save<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f<<"\n"<<g<<"\n"<<h<<"\n"<<i<<"\n"<<j<<"\n"<<k<<"\n"<<l<<"\n"; 
       
      save<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f<<"\n"<<g<<"\n"<<h<<"\n"<<i<<"\n"<<j<<"\n"<<k<<"\n"<<l; 

         } 



         void edit() {
           
           //system("cls");                         //edit function edit the items by user
         	string str;

          show();

           switch(count) {

           case 1:
              cout<<"1.";
              str=edit_mode();
               a=str;
              if(str=="")
                break;             

           case 2:
              cout<<"2.";
              str=edit_mode();
              b=str;
              if(str=="")
                break;               
	         
           case 3:
             cout<<"3.";
             str=edit_mode();
             c=str; 
              if(str=="")
                break;             
           
           case 4:
             cout<<"4.";
             str=edit_mode();
             d=str;
              if(str=="")
                break;

           case 5:
              cout<<"5.";
              str=edit_mode();
              e=str;
              if(str=="")
                break;         
           
           case 6:
              cout<<"6.";
              str=edit_mode();
              f=str;
              if(str=="")
                break;        

           case 7:
              cout<<"7.";
              str=edit_mode();
              g=str;
              if(str=="")
                break;        
           
           case 8:
              cout<<"8.";
              str=edit_mode();
              h=str;
              if(str=="")
                break;

           case 9:
              cout<<"9.";
              str=edit_mode();
              i=str;
              if(str=="")
                break;

           case 10:
              cout<<"10.";
              str=edit_mode();
              j=str;
              if(str=="")
                break;                                 

           case 11:
              cout<<"11.";
              str=edit_mode();
              k=str;
              if(str=="")
                break;        
      
           case 12:     
              cout<<"12.";
              str=edit_mode();
              l=str;
              if(str=="")
                break;  

                                
 
                 } 	
         }     

           
     string edit_mode( ) {
        const char *temp;                                     //edit mode returnable function
        char ch;
        string st;
        while((ch=getch())!=27) {
              
            cout<<ch;
            st+=ch;
                
          if(ch==13) {
            
            cout<<"\n";
            break;
              
              }
           }  

            /*if(ch==13){
              strlen(temp);
              if(*temp<2)
                st=count;
                return st;*/
            
                           
            if (ch==27) {
              st="";
             return st;
               }
             count++;  
            return st;  

       }


     void show() {

      system("cls");
      int ino=1;

  if(ino<count)
    cout<<ino<<" "<<a<<"\n";  ino++;
  
  if(ino<count)  
    cout<<ino<<" "<<b<<"\n";  ino++;

  if(ino<count)   
    cout<<ino<<" "<<c<<"\n";  ino++;

  if(ino<count)   
    cout<<ino<<" "<<d<<"\n";  ino++;

  if(ino<count)   
    cout<<ino<<" "<<e<<"\n";  ino++;

  if(ino<count)
    cout<<ino<<" "<<f<<"\n";  ino++;

  if(ino<count)
    cout<<ino<<" "<<g<<"\n";  ino++;

  if(ino<count)
    cout<<ino<<" "<<h<<"\n";  ino++;

  if(ino<count)
    cout<<ino<<" "<<i<<"\n";  ino++;

  if(ino<count)
    cout<<ino<<" "<<j<<"\n";  ino++;
    
  if(ino<count)
    cout<<ino<<" "<<k<<"\n";  ino++;

  if(ino<count)
    cout<<ino<<" "<<l<<"\n";  ino++;
    
          }  


   };


        int main() {

           data object;

           //object.show();
           //getch();

           object.edit();

           object.save_file();

           //object.show();
           getch();

        }