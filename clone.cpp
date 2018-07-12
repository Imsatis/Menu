/////////////////////Menu Project Clone.............;

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<gotoxy.h>
#include<fstream>
#include<string.h>


////////////////////////

  //using namespace std;          //*RECURSION TESTED....


                       //**Tomorrow work is to make a logic recursion free code
     


      class DATA {  

       //string   1,2,3,4,5,6,7,8,9,10,11,12,13,14,15;

    protected:

        DATA(){

          //const int size=15;

        }

        //string *chi_non[];//={&chi_non1,&chi_non2,&chi_non3,&chi_non4,&chi_non5,&chi_non6,&chi_non7,&chi_non8,&chi_non9,&chi_non10,&chi_non11,&chi_non12,&chi_non13,&chi_non14,&chi_non15};

        //string ary[];

        //nt aa;
        string chi_non[15]; int len[15];

        string   chi_non1,chi_non2,chi_non3,chi_non4,chi_non5,chi_non6,chi_non7,chi_non8,chi_non9,chi_non10,chi_non11,chi_non12,chi_non13,chi_non14,chi_non15;

        string   chi_veg1,chi_veg2,chi_veg3,chi_veg4,chi_veg5,chi_veg6,chi_veg7,chi_veg8,chi_veg9,chi_veg10,chi_veg11,chi_veg12,chi_veg13,chi_veg14,chi_veg15;
      
        string   in_non1,in_non2,in_non3,in_non4,in_non5,in_non6,in_non7,in_non8,in_non9,in_non10,in_non11,in_non12,in_non13,in_non14,in_non15;

        string   in_veg1,in_veg2,in_veg3,in_veg4,in_veg5,in_veg6,in_veg7,in_veg8,in_veg9,in_veg10,in_veg11,in_veg12,in_veg13,in_veg14,in_veg15;
         
        int count; 

      }; 

      class COMMON  {

      public:


//************reading from txt file*************************\\

        string reading(ifstream &read_item,int &l) {

            char ch;
            string temp;                            

             while((read_item.get(ch)&&ch!='\n')) {

                  temp+=ch;
                  l++;
                  }
               return temp;   
           }

           void space(int sp) {

            while(sp) {
              cout<<" ";
              sp--;
             }
          }


/******************Veg and Non-Veg display****************/

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

     }while(jump!=0); 
    }
  };   



        class CHINESE :protected DATA , public COMMON   {

     /********************* Chinese Function ********************/
 
      public:


       void  arr() {

         //a=10;

        //chi_non[0]=&chi_non1;
       
      }

        CHINESE() {

          cout<<"constructor";getch();


      ifstream read_count;
      read_count.open("chi.md");      //udd constructor for reading count value;
      read_count>>count;

      ifstream read_item;
      read_item.open("chidata.md");      //udd constructor for reading items;    
   
      
      //string *chi_non[16]={&chi_non1,&chi_non2,&chi_non3,&chi_non4,&chi_non5,&chi_non6,&chi_non7,&chi_non8,&chi_non9,&chi_non10,&chi_non11,&chi_non12,&chi_non13,&chi_non14,&chi_non15};
       
      //string ary[15];

      for (int i=0;i<15;i++) {

          int l=0;                               //testing for reading files;        
          chi_non[i]=reading(read_item,l);
          len[i]=35-l;
      
      }
       
      


   /**  

      chi_non1=reading(read_item);
      chi_non2=reading(read_item);
      chi_non3=reading(read_item);
      chi_non4=reading(read_item);
      chi_non5=reading(read_item);
      chi_non6=reading(read_item);
      chi_non7=reading(read_item);
      chi_non8=reading(read_item);
      chi_non9=reading(read_item);
      chi_non10=reading(read_item);
      chi_non11=reading(read_item);
      chi_non12=reading(read_item);
      chi_non13=reading(read_item);
      chi_non14=reading(read_item);
      chi_non15=reading(read_item);   **/

        
        }

        int value;

      void chinese_disp() {

        value=nonveg_disp();
        //cout<<value;getch();
         
        if (value==1){

           chi_non_show();
        }
        if (value==2) {
          
           chi_veg_show();
        }

           }

      void chi_non_show() {


      system("cls");
      
      gotoxy(32,3);
      cout<<"Non-Vegetarian";

      gotoxy(6,3);
      cout<<"Items";
      gotoxy(25,0);
      cout<<"Half";
      gotoxy(12,0);
      cout<<"Full\n";
         
         int no=1;
          

        //gotoxy(32,3);       

      for (int i=0;i<15;i++) {

           //35 space;                               //testing for reading files;        

            cout<<"* "<<chi_non[i];

            space(len[i]);
             
            cout<<len[i];

            space(14);
            cout<<len[i]<<"\n";
          }




 /***
      if(no<count)  
        cout<<"\n\n\n"<<no<<" "<<chi_non1<<"\n";  no++;
        
      if(no<count)
        cout<<no<<" "<<chi_non2<<"\n";  no++;
        
      if(no<count)
        cout<<no<<" "<<chi_non3<<"\n";  no++;
      
      if(no<count)
        cout<<no<<" "<<chi_non4<<"\n";  no++;
      
      if(no<count)
        cout<<no<<" "<<chi_non5<<"\n";  no++;
      
      if(no<count)
        cout<<no<<" "<<chi_non6<<"\n";  no++;
        
      if(no<count)
        cout<<no<<" "<<chi_non7<<"\n";  no++;
        
      if(no<count) 
        cout<<no<<" "<<chi_non8<<"\n";  no++;
        
      if(no<count)  
        cout<<no<<" "<<chi_non9<<"\n";  no++;
        
      if(no<count)  
        cout<<no<<" "<<chi_non10<<"\n";  no++;
        
      if(no<count) 
        cout<<no<<" "<<chi_non11<<"\n";  no++;
        
      if(no<count)
        cout<<no<<" "<<chi_non12<<"\n";  no++;
        
      if(no<count)
        cout<<no<<" "<<chi_non13<<"\n";  no++;
        
      if(no<count)
        cout<<no<<" "<<chi_non14<<"\n";  no++;
        
      if(no<count)
        cout<<no<<" "<<chi_non15<<"\n";  no++;
     **/     

      gotoxy(2,1);
      cout<<"Selected Items";
      gotoxy(19,0);
      cout<<"Amount"; 
      gotoxy(15,0);
      cout<<"";
      
      char slc[3];
      int a,b,c;
       for (int l=0;l<3;l++) {

          cin>>slc[l];
        }
     
           a=(int)slc[0];
           b=(int)slc[1];
           c=(int)slc[3];

        if (a==49) {

            a=0;
            b=0;  
          } 

          


      cout<<chi_non[a]<<"              "<<len[b];

      //cout<<slc<<" 100";    


                      }

      void chi_veg_show() {

        int no=1;       
 
      if(no<count)
        cout<<no<<" "<<chi_veg1<<"\n";  no++;

      if(no<count)
        cout<<no<<" "<<chi_veg2<<"\n";  no++;

      if(no<count)
        cout<<no<<" "<<chi_veg3<<"\n";  no++;

      if(no<count)
        cout<<no<<" "<<chi_veg4<<"\n";  no++;

      if(no<count)
        cout<<no<<" "<<chi_veg5<<"\n";  no++;

      if(no<count)
        cout<<no<<" "<<chi_veg6<<"\n";  no++;

      if(no<count)
        cout<<no<<" "<<chi_veg7<<"\n";  no++;

      if(no<count)
        cout<<no<<" "<<chi_veg8<<"\n";  no++;

      if(no<count)
        cout<<no<<" "<<chi_veg9<<"\n";  no++;

      if(no<count)
        cout<<no<<" "<<chi_veg10<<"\n";  no++;

      if(no<count)
        cout<<no<<" "<<chi_veg11<<"\n";  no++;

      if(no<count)
        cout<<no<<" "<<chi_veg12<<"\n";  no++;

      if(no<count)
        cout<<no<<" "<<chi_veg13<<"\n";  no++;

      if(no<count)
        cout<<no<<" "<<chi_veg14<<"\n";  no++;

      if(no<count)
        cout<<no<<" "<<chi_veg15<<"\n";  no++;


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
      
        //else {cout<<"loop menu";
       getch();
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


   class show :protected DATA {

    public:
    void  add() {
    //cout<<"\n"<<&chi_non1<<"\n"<<&chi_non2<<"\n"<<&chi_non3<<"\n"<<&chi_non4<<"\n"<<&chi_non5<<"\n"<<&chi_non6<<"\n"<<&chi_non7<<"\n"<<&chi_non8<<"\n"<<&chi_non9<<"\n"<<&chi_non10<<"\n"<<&chi_non11<<"\n"<<&chi_non12<<"\n"<<&chi_non13<<"\n"<<&chi_non14<<"\n"<<&chi_non15;
    
    //string *chi_non[16]={&chi_non1,&chi_non2,&chi_non3,&chi_non4,&chi_non5,&chi_non6,&chi_non7,&chi_non8,&chi_non9,&chi_non10,&chi_non11,&chi_non12,&chi_non13,&chi_non14,&chi_non15};

    //for(int i=0;i<=15;i++) {
      
        //cout<<*chi_non[i]<<"\n";
        
//        cout<<ary[i];

  //test for diplay;     }
      } 

 };

     int main() {

     	HOME test;
     	test.welcome();

      show tem;
      tem.add();

      return 0;
     }