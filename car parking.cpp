#include<iostream>
#include<stdlib.h>
#include<time.h>  
#include<windows.h>
#include<mmsystem.h>
#include<algorithm>
#include<string>
#include<fstream>
int tot_income=0;      // globle variable 
using namespace std;
fstream hout("abc.txt");
// fstream hout();


class front
{
 public:
  
 int groupName()
   {
   	cout<<endl<<endl;
cout<<" ****************************************************************************"<<endl	;
cout<<" ****************************************************************************"<<endl	;
cout<<" **                                                                        **"<<endl ;
cout<<" **   *****    ******     ******  *      *  *****           *****          **"<<endl ;
cout<<" **  *     *   *     *   *      * *      *  *    *         *               **"<<endl ;
cout<<" ** *          *     *   *      * *      *  *    *         *               **"<<endl ;
cout<<" ** *          ******    *      * *      *  *****          * ****          **"<<endl ;
cout<<" ** *    ****  *    *    *      * *      *  *     *****    **    *         **"<<endl ;
cout<<" **  *    * *  *     *   *      * *      *  *              *     *         **"<<endl ;
cout<<" **   ****  *  *      *   ******   ******   *               *****          **"<<endl ;
cout<<" **                                                                        **"<<endl ;
cout<<" ****************************************************************************"<<endl	;
cout<<" ****************************************************************************"<<endl	;
}

int member()
   {
        	Sleep(1000);   	
   		system("CLS");
   		cout<<endl<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"-----------               MEMBERS OF GROUP - 6                            -----"<<endl<<endl;
	Beep(1000,500);
	Sleep(800);
	cout<<"----------- 1: SAAD ASHRAF		  (MCSM-F20-061)                  -----"<<endl<<endl;
	Beep(1000,500);
	Sleep(800);

	cout<<"-------------- this program is also uploaded on GITHUB --- --------------------"<<endl;
	Beep(1000,500);
	Sleep(800);
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"press any to next";
	cin.get();
	return 0;
   }
int car()
{
	Sleep(1000);   	
   		system("CLS");
   		Beep(1000,500);
   		cout<<endl<<endl;
cout<<" ****************************************************************************"<<endl	;
cout<<" ****************************************************************************"<<endl	;
cout<<" **                                                                        **"<<endl ;
cout<<" **                ****    *******   ******                                **"<<endl ;
cout<<" **               *    *   *     *   *     *                               **"<<endl ;
cout<<" **              *         *     *   *     *                               **"<<endl ;
cout<<" **              *         *******   ******                                **"<<endl ;
cout<<" **              *         *     *   *    *                                **"<<endl ;
cout<<" **               *    *   *     *   *     *                               **"<<endl ;
cout<<" **                ****    *     *   *      *                              **"<<endl ;
cout<<" **                                                                        **"<<endl ;
cout<<" ****************************************************************************"<<endl	;
cout<<" ****************************************************************************"<<endl	;
	
	
}
int welcome()
{
	  	Sleep(1000);   	
   		system("CLS");
   		Beep(1000,500);
   		cout<<endl<<endl;
cout<<" ****************************************************************************"<<endl	;
cout<<" ****************************************************************************"<<endl	;
cout<<" **                                                                        **"<<endl ;
cout<<" **  *       * ******* *       ****     ****   **     **  ********         **"<<endl ;
cout<<" **  *       * *       *      *    *   *    *  * *   * *  *                **"<<endl ;
cout<<" **  *       * *       *     *        *      * *  * *  *  *                **"<<endl ;
cout<<" **  *   *   * ******* *     *        *      * *   *   *  *******          **"<<endl ;
cout<<" **  *  * *  * *       *     *        *      * *       *  *                **"<<endl ;
cout<<" **  * *   * * *       *      *    *   *    *  *       *  *                **"<<endl ;
cout<<" **  **     ** ******* *****   ****     ****   *       *  ********         **"<<endl ;
cout<<" **                                                                        **"<<endl ;
cout<<" ****************************************************************************"<<endl	;
cout<<" ****************************************************************************"<<endl	;
	
	
}
int parking()
{
	Sleep(1000);   	
   		system("CLS");
   		Beep(1000,500);
   cout<<endl<<endl;		
cout<<" ****************************************************************************"<<endl	;
cout<<" ****************************************************************************"<<endl	;
cout<<" **                                                                        **"<<endl ;
cout<<" **   *****    *******   ******    *   *   *  **     *    *****            **"<<endl ;
cout<<" **   *    *   *     *   *     *   *  *    *  * *    *   *     *           **"<<endl ;
cout<<" **   *    *   *     *   *     *   * *     *  *  *   *  *                  **"<<endl ;
cout<<" **   *****    *******   ******    **      *  *   *  *  *                  **"<<endl ;
cout<<" **   *        *     *   *    *    * *     *  *    * *  *  *****           **"<<endl ;
cout<<" **   *        *     *   *     *   *  *    *  *     **  *    * *           **"<<endl ;
cout<<" **   *        *     *   *      *  *   *   *  *      *   ***** *           **"<<endl ;
cout<<" **                                                                        **"<<endl ;
cout<<" ****************************************************************************"<<endl	;
cout<<" ****************************************************************************"<<endl<<endl<<endl	;		
}

};
int list()
{
	int type;
	string b= "bike ";
	string c= " car ";
	string r= "riksha";
	string w= "wagon ";
	cout<<endl<<endl;
cout<<" ********************************"<<endl;	
cout<<" *    select your car type      *"<<endl;
cout<<" ********************************"<<endl;
  cout<<"   ________________________ "<<endl;
  cout<<"   |                       |"<<endl; 
  cout<<"   |     1:     bike       |"<<endl; 
  cout<<"   |     2:     car        |"<<endl;
  cout<<"   |     3:     riksha     |"<<endl; 
  cout<<"   |     4:     wagon      |"<<endl;
  cout<<"   |_______________________|"<<endl<<endl;
  cin>>type;
   cout<<"-------------------------------------------------------------"<<endl<<endl;
	class front obj;
	system("cls");
	obj.parking();

	 if(type== 1) 
		  return 1;		  
	 else if( type == 2)
	        return 2;
			
	 else if( type == 3)
	        return 3;
			
	 else if( type == 4)
	        return 4;     
  	
}

int login()
{
	string userName= "saad_123";
	int passward = 12345;
	
	cout<<endl<<endl;
cout<<" ********************************"<<endl;	
cout<<" *  first time login by ADMIN   *"<<endl;
cout<<" ********************************"<<endl;
 
return 0;	
}	

int security()
{
int secu;
	cout<<endl<<endl;
cout<<" ********************************"<<endl;	
cout<<" *   Select your security type  *"<<endl;
cout<<" ********************************"<<endl;
  cout<<"    _______________________ "<<endl;
  cout<<"   |                       |"<<endl; 
  cout<<"   |     1:     normal     |"<<endl; 
  cout<<"   |     2:     special    |"<<endl;
  cout<<"   |       (extra charges) |"<<endl;
  cout<<"   |_______________________|"<<endl<<endl;
  cin>>secu;
   cout<<"-------------------------------------------------------------"<<endl<<endl;
	
	return secu;
}


int token(string Veh_typ,string Veh_NO ,int charges,string location,int security)
{
	 time_t tt;
	struct tm *ti;
	time(&tt);
	ti=localtime(&tt);
	
	if (security== 1)
	{  }
	else
	 charges+=20;
	
	int a= 20;
	tot_income = tot_income + charges;       ////   counting totat income 
	system("cls");
cout<<" ********************************"<<endl;	
cout<<" *           token              *"<<endl;
cout<<" ********************************"<<endl;	
cout<<" *  vehicle  :                  *"<<endl;
cout<<" *         "<<Veh_typ <<"                 *"<<endl;
cout<<" *                              *"<<endl;
cout<<" *  vehicle No.                 *"<<endl;
cout<<" *        "<< Veh_NO<<"                *"<<endl;
cout<<" *                              *"<<endl;
cout<<" *  day+time :                  *"<<endl;
cout<<" * "<<asctime(ti)<<" *"<<endl;
cout<<" *                              *"<<endl;
cout<<" *  location :                  *"<<endl;
cout<<" *       "<< location <<"           *"<<endl;
cout<<" *                              *"<<endl;
cout<<" *  charges  :                  *"<<endl;
cout<<" *       "<< charges <<"                     *"<<endl;
cout<<" *                              *"<<endl;
cout<<" ********************************"<<endl;
cout<<" *      thanks for coming       *"<<endl;
cout<<" ********************************"<<endl;

fstream hout("abc.txt");

hout<<Veh_typ<<"\t\t\t\t"<< Veh_NO  <<"\t\t\t\t"<< location <<"\t\t\t\t"<< charges<<endl; ;
hout.close();

   return 0;
}

struck ()
{
	
	
}

void read()
{
	
}

int opt()
{
	int act;
		cout<<endl<<endl;
cout<<" *****************************************"<<endl;	
cout<<" *         select your action            *"<<endl;
cout<<" *****************************************"<<endl;
  cout<<"   _________________________________ "<<endl;
  cout<<"   |                                |"<<endl; 
  cout<<"   |     1:     Add vehicle         |"<<endl; 
  cout<<"   |     2:     Total parked Veh    |"<<endl;
  cout<<"   |     3:     Total income        |"<<endl; 
  cout<<"   |     4:     Delete              |"<<endl;
  cout<<"   |     5:     See all record      |"<<endl;
  cout<<"   |________________________________|"<<endl<<endl;
  cin>>act;
   cout<<"-------------------------------------------------------------"<<endl<<endl;
	
return act;
}	

  
      
int main()

{
	
	front obj;
	obj.groupName();
	obj.member();
	obj.welcome();
	obj.car();
	obj.parking();
	hout<<"WEHICLE_TYPE \t\t\t VEHICLE_NO.\t\t\t LOCATION \t\t\t charges"<<endl;
	int a ,secu ;
	char Veh_NO[8] ;
	string Veh_typ;
  
           // vehicle type
     int charges;
     string floor;
    int totalParkVeh =0;
   // int tot_income =0;
     char again;
do
{
		
	int ab= opt();
//	cout<<ab;
	switch (ab)
	{
	case  1:
	{
		 int vt=list(); 
		 if (vt==1)
      {
      	Veh_typ= "bike";
      	charges=20;
      	floor =" 2nd_basement";
      	totalParkVeh++;
      	
	  }
	  else if(vt==2)
      {
      	Veh_typ="car";
      	charges=40;
      	floor =" ground_floor";
      	totalParkVeh++;
	  }
	 
	  else if(vt==3)
      {
      	Veh_typ="riksha";
      	charges=30;
        floor =" 1st_floor";
		totalParkVeh++;	
	  }
	  else if(vt==4)
      {
      	Veh_typ="wagon";
      	charges=50;
      	floor =" basement";
      	totalParkVeh++;
	  }
	  
	  
	  
       cout<<"------------------------------------------";                      
      cout<<"enter your vehicle number   :   ";     // vehicle    number
      cin>>Veh_NO;
 
    
      secu=security() ;                               //security type 
     
      token(Veh_typ,Veh_NO,charges,floor,secu);
      
		break;
	}
	case  2:
	{
		
		cout<<" total  number of vehical are   :"<<totalParkVeh<<endl;
		
		
		break;
	}
	case  3:
	{
		cout<< "total income is   :"<<tot_income;
		break;
	}
	case  4:
	{
        hout.open("abc.txt");
		remove("abc.txt");
		break;
	}
	
	case  5:
	{
		char c;
   
       fstream hout("abc.txt");
       while(hout.eof()==0)
  {
    hout.get(c);
    cout<<c;
  }

		break;
	}	
		
		
	}
	
	cout<<" ========= do you want to enter again ======== "<<endl;
	cin>>again;
	
}while( again=='y' || again=='Y');









return 0;	
}
